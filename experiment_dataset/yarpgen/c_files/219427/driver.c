#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
int var_4 = 1556164819;
unsigned short var_6 = (unsigned short)21842;
unsigned short var_7 = (unsigned short)57065;
long long int var_12 = 8624012002256501171LL;
unsigned char var_14 = (unsigned char)80;
int zero = 0;
signed char var_15 = (signed char)8;
unsigned short var_16 = (unsigned short)56471;
unsigned char var_17 = (unsigned char)44;
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
