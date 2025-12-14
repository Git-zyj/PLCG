#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)43623;
short var_10 = (short)-13384;
signed char var_11 = (signed char)54;
unsigned short var_13 = (unsigned short)48352;
unsigned char var_17 = (unsigned char)232;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned short var_20 = (unsigned short)40000;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)5227;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
