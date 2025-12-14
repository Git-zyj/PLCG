#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12416;
short var_6 = (short)15327;
unsigned long long int var_12 = 14691923914482239298ULL;
short var_13 = (short)1486;
int zero = 0;
unsigned short var_14 = (unsigned short)21192;
unsigned int var_15 = 665758427U;
short var_16 = (short)6837;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
