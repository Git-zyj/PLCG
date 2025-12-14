#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2600581829808337246LL;
int var_2 = -2141731943;
unsigned long long int var_5 = 3899680589220740721ULL;
unsigned long long int var_7 = 17746637923508104970ULL;
unsigned short var_11 = (unsigned short)6151;
int zero = 0;
signed char var_12 = (signed char)44;
unsigned int var_13 = 2679463053U;
unsigned long long int var_14 = 10299236311852248668ULL;
void init() {
}

void checksum() {
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
