#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64539;
unsigned short var_3 = (unsigned short)35973;
unsigned long long int var_11 = 10849600973084749999ULL;
unsigned int var_13 = 1054917774U;
short var_14 = (short)2655;
unsigned short var_15 = (unsigned short)10258;
int zero = 0;
short var_16 = (short)24377;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)919;
unsigned short var_19 = (unsigned short)54503;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
