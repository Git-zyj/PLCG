#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)33422;
short var_4 = (short)-29330;
_Bool var_5 = (_Bool)0;
long long int var_6 = -2364903886447875686LL;
unsigned char var_8 = (unsigned char)174;
_Bool var_12 = (_Bool)1;
long long int var_13 = -4537793818430154397LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 5327944829838509537ULL;
unsigned int var_16 = 2299408474U;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
