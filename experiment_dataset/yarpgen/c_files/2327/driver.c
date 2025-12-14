#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)-1;
short var_4 = (short)-24247;
signed char var_5 = (signed char)28;
signed char var_7 = (signed char)-20;
_Bool var_8 = (_Bool)0;
short var_13 = (short)21500;
int zero = 0;
short var_14 = (short)16032;
unsigned int var_15 = 3150313927U;
unsigned int var_16 = 1883394334U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
