#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)29548;
unsigned int var_8 = 3232724681U;
long long int var_10 = -4344625454706180832LL;
int var_11 = 209255483;
signed char var_13 = (signed char)51;
int zero = 0;
unsigned char var_14 = (unsigned char)94;
int var_15 = -1513408484;
short var_16 = (short)-24392;
signed char var_17 = (signed char)62;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
