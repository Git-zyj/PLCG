#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)25605;
unsigned short var_2 = (unsigned short)519;
short var_5 = (short)493;
int var_6 = -925991360;
unsigned char var_7 = (unsigned char)80;
int var_8 = 696782579;
short var_10 = (short)17236;
unsigned int var_11 = 3652156109U;
unsigned short var_12 = (unsigned short)47219;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 642924440U;
long long int var_15 = -1776396380771434973LL;
unsigned int var_16 = 223349446U;
short var_17 = (short)7658;
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
