#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 2019322129U;
unsigned short var_6 = (unsigned short)56290;
unsigned short var_7 = (unsigned short)44917;
int var_8 = 2122820526;
unsigned short var_9 = (unsigned short)44542;
short var_10 = (short)22783;
short var_11 = (short)-3180;
unsigned char var_12 = (unsigned char)76;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned short var_15 = (unsigned short)59315;
int var_16 = -1971117537;
unsigned char var_17 = (unsigned char)141;
unsigned short var_18 = (unsigned short)45120;
long long int var_19 = -7896750731760336408LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
