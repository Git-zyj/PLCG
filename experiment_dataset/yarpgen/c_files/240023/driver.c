#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)10342;
_Bool var_8 = (_Bool)1;
short var_10 = (short)-32184;
unsigned char var_12 = (unsigned char)64;
int var_13 = -1801881420;
unsigned short var_16 = (unsigned short)6594;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_19 = -6624625465032648511LL;
_Bool var_20 = (_Bool)1;
int var_21 = 69463465;
unsigned long long int var_22 = 12258537449251707982ULL;
_Bool var_23 = (_Bool)0;
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
