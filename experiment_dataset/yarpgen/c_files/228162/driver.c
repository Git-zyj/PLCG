#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)54504;
_Bool var_5 = (_Bool)0;
_Bool var_8 = (_Bool)1;
int var_14 = 873907543;
unsigned char var_15 = (unsigned char)0;
int zero = 0;
unsigned char var_16 = (unsigned char)144;
unsigned int var_17 = 163877286U;
void init() {
}

void checksum() {
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
