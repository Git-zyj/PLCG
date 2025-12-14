#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1997541522U;
unsigned int var_6 = 3976807721U;
unsigned int var_7 = 761353684U;
unsigned int var_12 = 1189204809U;
unsigned int var_14 = 3680986940U;
unsigned int var_17 = 2378262671U;
int zero = 0;
unsigned int var_20 = 2035292294U;
unsigned int var_21 = 1194984115U;
unsigned int var_22 = 1991331235U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
