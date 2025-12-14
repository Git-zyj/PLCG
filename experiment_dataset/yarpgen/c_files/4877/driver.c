#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)12186;
unsigned long long int var_15 = 3557185559337539021ULL;
int var_16 = 2070052782;
int zero = 0;
short var_18 = (short)-10147;
unsigned char var_19 = (unsigned char)38;
unsigned int var_20 = 1158119873U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
