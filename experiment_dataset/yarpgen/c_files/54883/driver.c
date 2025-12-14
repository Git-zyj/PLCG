#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)93;
unsigned char var_3 = (unsigned char)143;
unsigned short var_4 = (unsigned short)13595;
unsigned char var_6 = (unsigned char)151;
unsigned short var_7 = (unsigned short)17298;
unsigned char var_12 = (unsigned char)170;
unsigned char var_13 = (unsigned char)147;
unsigned char var_15 = (unsigned char)70;
long long int var_16 = 5530827370943089913LL;
long long int var_17 = 7465420382202783020LL;
int zero = 0;
long long int var_19 = -2825082805612176969LL;
_Bool var_20 = (_Bool)1;
short var_21 = (short)864;
unsigned int var_22 = 4117997645U;
unsigned short var_23 = (unsigned short)50896;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
