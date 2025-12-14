#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned int var_4 = 193269005U;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 2193831478U;
long long int var_9 = 5784341010497716502LL;
short var_12 = (short)-23263;
int zero = 0;
unsigned int var_13 = 1980021376U;
unsigned char var_14 = (unsigned char)190;
unsigned long long int var_15 = 1217694933317085418ULL;
long long int var_16 = 99013278370591598LL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
