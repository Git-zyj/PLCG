#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 887088842U;
short var_4 = (short)-8266;
short var_11 = (short)-29537;
unsigned long long int var_12 = 249499526664762364ULL;
unsigned long long int var_15 = 14303729624608775994ULL;
int zero = 0;
unsigned int var_17 = 4036270960U;
unsigned short var_18 = (unsigned short)51364;
unsigned int var_19 = 2259986906U;
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
