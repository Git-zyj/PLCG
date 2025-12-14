#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1664308727;
unsigned char var_2 = (unsigned char)115;
unsigned int var_4 = 2585675078U;
unsigned short var_5 = (unsigned short)3092;
int zero = 0;
unsigned long long int var_10 = 13486796425883315707ULL;
unsigned char var_11 = (unsigned char)124;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
