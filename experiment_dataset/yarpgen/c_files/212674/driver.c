#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)48;
short var_4 = (short)21921;
signed char var_5 = (signed char)80;
signed char var_6 = (signed char)42;
signed char var_10 = (signed char)33;
unsigned int var_11 = 2312683242U;
int zero = 0;
unsigned char var_12 = (unsigned char)129;
short var_13 = (short)16304;
unsigned int var_14 = 3968835153U;
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
