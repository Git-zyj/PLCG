#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3175665264U;
unsigned int var_5 = 2300674379U;
unsigned int var_8 = 917908900U;
unsigned int var_11 = 1186171194U;
int zero = 0;
unsigned int var_16 = 3051629243U;
unsigned int var_17 = 3044969187U;
unsigned int var_18 = 124360047U;
unsigned int var_19 = 131228262U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
