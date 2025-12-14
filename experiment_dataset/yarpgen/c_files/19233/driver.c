#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1029151188;
int var_3 = -2091469142;
unsigned short var_5 = (unsigned short)44132;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-20212;
unsigned int var_8 = 1001326387U;
long long int var_13 = -3846537615086311480LL;
unsigned int var_14 = 457942726U;
int zero = 0;
short var_19 = (short)-21330;
signed char var_20 = (signed char)72;
unsigned char var_21 = (unsigned char)152;
unsigned char var_22 = (unsigned char)239;
unsigned int var_23 = 920041894U;
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
