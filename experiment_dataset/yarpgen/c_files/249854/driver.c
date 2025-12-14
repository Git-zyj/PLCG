#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)27241;
unsigned short var_4 = (unsigned short)30456;
unsigned char var_6 = (unsigned char)84;
_Bool var_11 = (_Bool)1;
int var_14 = -1376299386;
int zero = 0;
unsigned long long int var_15 = 13945419708028787835ULL;
unsigned long long int var_16 = 10652534742480174650ULL;
int var_17 = 1479469394;
unsigned short var_18 = (unsigned short)25065;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
