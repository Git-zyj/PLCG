#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_3 = (short)-28887;
short var_13 = (short)14989;
short var_14 = (short)22284;
int zero = 0;
long long int var_16 = -989518095459049865LL;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)51;
long long int var_19 = 8851573571608391885LL;
void init() {
}

void checksum() {
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
