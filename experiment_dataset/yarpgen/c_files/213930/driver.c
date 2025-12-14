#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)244;
unsigned int var_6 = 4017163242U;
int var_7 = 530909999;
short var_8 = (short)1100;
unsigned int var_9 = 4110224883U;
unsigned int var_12 = 3508853301U;
unsigned long long int var_13 = 13361881009034542524ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)10812;
unsigned long long int var_15 = 11599761137931901836ULL;
int var_16 = -1865427348;
int var_17 = 1992488204;
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
