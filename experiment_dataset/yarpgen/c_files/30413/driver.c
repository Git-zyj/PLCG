#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_4 = 1424346831;
unsigned int var_6 = 757279843U;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)155;
unsigned int var_9 = 3449017586U;
unsigned short var_11 = (unsigned short)11210;
short var_13 = (short)22481;
int zero = 0;
short var_14 = (short)-3903;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 6446138411187799862ULL;
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
