#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)100;
unsigned char var_12 = (unsigned char)70;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)144;
unsigned char var_15 = (unsigned char)143;
unsigned char var_17 = (unsigned char)218;
unsigned char var_18 = (unsigned char)237;
_Bool var_19 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)12;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)225;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
