#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-30310;
unsigned char var_3 = (unsigned char)43;
unsigned short var_4 = (unsigned short)5190;
long long int var_5 = -6005108924845589643LL;
_Bool var_7 = (_Bool)0;
int var_11 = -491937674;
unsigned int var_15 = 3985147081U;
int zero = 0;
unsigned int var_17 = 1940919837U;
unsigned long long int var_18 = 1845476171477023243ULL;
short var_19 = (short)23288;
void init() {
}

void checksum() {
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
