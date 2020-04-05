#include <iostream>
#include <map>
#include <string>

int addition(int a, int b) {
    return a + b;
}
int subtraction(int a, int b) {
    return a - b;
}
int multiplication(int a, int b) {
    return a * b;
}
int division(int a, int b) {
    return a / b;
}

int main() {
    std::map<std::string, int(*)(int, int) > m;
    m["+"] = addition;
    m["-"] = subtraction;
    m["*"] = multiplication;
    m["/"] = division;
    
    int prev;
    std::cout << "Enter caluculation (Ex: 1 + 2 =)" << "\n";
    std::cin >> prev;
    while(1>0) {
        int number;
        std::string calculation;
        
        std::cin >> calculation;
        if (calculation == "="){
            break;
        }
        std::cin >> number;
        prev = m[calculation](prev, number);
    }
    std::cout << prev << std::endl;
}
