#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6292;
unsigned int var_1 = 1768968397U;
long long int var_2 = -8485913002746777044LL;
unsigned int var_4 = 3489738031U;
unsigned int var_6 = 4009759486U;
short var_8 = (short)-23486;
unsigned short var_10 = (unsigned short)61929;
int zero = 0;
int var_14 = 1220925122;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
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
