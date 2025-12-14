#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1416084290U;
unsigned long long int var_1 = 17503660397894700411ULL;
unsigned long long int var_2 = 6958961698860889552ULL;
unsigned int var_3 = 3831799826U;
long long int var_5 = 4786022838108295383LL;
unsigned short var_7 = (unsigned short)45701;
unsigned long long int var_10 = 16222064470249664725ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)5736;
unsigned int var_12 = 1670815992U;
signed char var_13 = (signed char)3;
unsigned int var_14 = 1733467233U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
