#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)12;
unsigned short var_5 = (unsigned short)63427;
unsigned int var_9 = 1270061504U;
unsigned int var_10 = 851700621U;
_Bool var_12 = (_Bool)0;
unsigned int var_14 = 1806507056U;
short var_15 = (short)708;
unsigned int var_16 = 3946630355U;
int zero = 0;
unsigned short var_17 = (unsigned short)16230;
signed char var_18 = (signed char)88;
int var_19 = 203586719;
unsigned char var_20 = (unsigned char)29;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
