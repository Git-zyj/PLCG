#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)151;
unsigned short var_6 = (unsigned short)19920;
int var_10 = 1206816596;
short var_12 = (short)-16720;
unsigned char var_15 = (unsigned char)196;
_Bool var_18 = (_Bool)0;
int zero = 0;
short var_19 = (short)12861;
_Bool var_20 = (_Bool)1;
long long int var_21 = -3398270974827432153LL;
short var_22 = (short)330;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
