#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1908036905;
int var_3 = 2137389670;
unsigned int var_4 = 1771678584U;
long long int var_5 = 6387184508020317868LL;
short var_10 = (short)-32523;
unsigned long long int var_12 = 5699925552422212686ULL;
unsigned short var_13 = (unsigned short)582;
int zero = 0;
unsigned long long int var_16 = 924469843256773398ULL;
unsigned int var_17 = 1500121373U;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
