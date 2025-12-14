#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1296642514;
int var_3 = 629363353;
int var_4 = -1040049100;
int var_5 = -320813333;
int var_6 = 900146380;
int var_9 = 1991266357;
int zero = 0;
int var_13 = 2075722653;
int var_14 = 1529931663;
int var_15 = -364163676;
int var_16 = -1024849578;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
