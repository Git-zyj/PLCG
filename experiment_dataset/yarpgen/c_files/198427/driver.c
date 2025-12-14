#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 13259219433716839533ULL;
unsigned char var_6 = (unsigned char)103;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)0;
short var_10 = (short)28984;
unsigned short var_13 = (unsigned short)51653;
int zero = 0;
unsigned int var_14 = 49500792U;
short var_15 = (short)19223;
int var_16 = -2145809552;
unsigned short var_17 = (unsigned short)1880;
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
