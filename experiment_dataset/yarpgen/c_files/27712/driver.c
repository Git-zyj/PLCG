#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_3 = 2413941821U;
unsigned int var_6 = 760646100U;
unsigned char var_7 = (unsigned char)65;
unsigned char var_10 = (unsigned char)76;
unsigned int var_12 = 1223106247U;
short var_14 = (short)-44;
_Bool var_15 = (_Bool)1;
unsigned char var_17 = (unsigned char)44;
int zero = 0;
_Bool var_18 = (_Bool)1;
short var_19 = (short)31122;
void init() {
}

void checksum() {
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
