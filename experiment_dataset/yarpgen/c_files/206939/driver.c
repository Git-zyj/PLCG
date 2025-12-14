#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1027693859900624470ULL;
unsigned int var_4 = 2497041792U;
signed char var_5 = (signed char)-40;
short var_16 = (short)31047;
int zero = 0;
unsigned long long int var_19 = 5639570317674744467ULL;
unsigned char var_20 = (unsigned char)188;
void init() {
}

void checksum() {
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
