#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)33322;
short var_5 = (short)-7496;
unsigned long long int var_11 = 10731702156294007066ULL;
unsigned long long int var_12 = 13511267061994964436ULL;
unsigned short var_15 = (unsigned short)30148;
int zero = 0;
long long int var_16 = 5765991943302550267LL;
long long int var_17 = -7334677200291107306LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
