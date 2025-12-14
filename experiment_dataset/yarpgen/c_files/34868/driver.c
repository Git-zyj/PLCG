#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)102;
short var_5 = (short)-18122;
unsigned short var_7 = (unsigned short)28989;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 2923989443U;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)124;
int zero = 0;
unsigned short var_16 = (unsigned short)29470;
unsigned char var_17 = (unsigned char)128;
void init() {
}

void checksum() {
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
