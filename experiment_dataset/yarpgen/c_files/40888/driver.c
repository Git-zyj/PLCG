#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3851162951U;
long long int var_6 = -5104209893148465886LL;
long long int var_7 = 2130857925947304356LL;
long long int var_8 = -6982822510361822300LL;
unsigned int var_9 = 3588407743U;
unsigned int var_12 = 2958981334U;
unsigned char var_13 = (unsigned char)230;
unsigned int var_14 = 487075696U;
int zero = 0;
unsigned char var_15 = (unsigned char)71;
unsigned long long int var_16 = 4806440191845229653ULL;
int var_17 = 992400061;
int var_18 = 1871484711;
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
