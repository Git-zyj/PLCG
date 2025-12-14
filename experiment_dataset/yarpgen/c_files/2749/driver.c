#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)30317;
signed char var_7 = (signed char)-102;
int var_10 = 245894715;
unsigned int var_13 = 557789225U;
int var_14 = 1187003755;
short var_16 = (short)-16762;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)46179;
unsigned int var_20 = 916539668U;
unsigned short var_21 = (unsigned short)18054;
short var_22 = (short)16344;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
