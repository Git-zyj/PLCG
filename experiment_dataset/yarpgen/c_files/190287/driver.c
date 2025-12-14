#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1315645463;
long long int var_8 = 6489320002573640196LL;
unsigned char var_12 = (unsigned char)32;
long long int var_13 = 2980830884405549527LL;
long long int var_15 = -4935517701615176109LL;
unsigned char var_16 = (unsigned char)76;
int zero = 0;
int var_17 = -1505174081;
unsigned long long int var_18 = 10805498438562666414ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
