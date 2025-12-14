#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -8021159431443151555LL;
long long int var_7 = -7545774781308341419LL;
unsigned short var_8 = (unsigned short)11597;
short var_11 = (short)-2928;
unsigned long long int var_12 = 3507833501446862098ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)44646;
short var_17 = (short)4707;
unsigned short var_18 = (unsigned short)5379;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
