#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)213;
unsigned char var_4 = (unsigned char)128;
unsigned short var_6 = (unsigned short)17207;
unsigned int var_8 = 804619854U;
unsigned short var_13 = (unsigned short)63128;
unsigned char var_15 = (unsigned char)150;
unsigned char var_17 = (unsigned char)177;
unsigned short var_19 = (unsigned short)54380;
int zero = 0;
unsigned int var_20 = 4164664380U;
unsigned int var_21 = 350542962U;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)198;
unsigned int var_24 = 2943706367U;
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
