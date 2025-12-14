#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25155;
unsigned int var_3 = 1859106824U;
unsigned int var_4 = 3321115280U;
unsigned int var_5 = 3245446784U;
unsigned char var_7 = (unsigned char)8;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1309844376U;
unsigned int var_13 = 4125281099U;
unsigned int var_16 = 1999850982U;
int zero = 0;
unsigned int var_17 = 4291145336U;
short var_18 = (short)22192;
unsigned long long int var_19 = 2906367827454425542ULL;
void init() {
}

void checksum() {
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
