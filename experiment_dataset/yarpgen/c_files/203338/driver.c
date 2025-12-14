#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)157;
int var_3 = -2056512539;
_Bool var_8 = (_Bool)0;
short var_9 = (short)4219;
unsigned short var_10 = (unsigned short)55140;
long long int var_14 = -8533477264012430532LL;
unsigned short var_15 = (unsigned short)31530;
unsigned int var_16 = 3323350314U;
unsigned int var_17 = 1154551722U;
int zero = 0;
unsigned short var_18 = (unsigned short)21783;
long long int var_19 = 788669550961720457LL;
unsigned int var_20 = 1125602927U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
