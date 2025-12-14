#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1900851264U;
unsigned char var_4 = (unsigned char)140;
unsigned short var_11 = (unsigned short)56505;
unsigned int var_13 = 3615367468U;
long long int var_14 = -5040270442342990483LL;
int zero = 0;
unsigned char var_15 = (unsigned char)88;
unsigned short var_16 = (unsigned short)42048;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
