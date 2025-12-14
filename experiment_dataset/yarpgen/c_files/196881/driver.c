#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 534046576U;
long long int var_4 = 8568806516939868332LL;
unsigned char var_7 = (unsigned char)84;
int var_8 = -1704987298;
short var_12 = (short)-15600;
_Bool var_13 = (_Bool)1;
short var_16 = (short)24508;
unsigned int var_17 = 968701564U;
int zero = 0;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-14859;
short var_20 = (short)30652;
unsigned short var_21 = (unsigned short)6339;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
