#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -567560108;
short var_4 = (short)26554;
unsigned int var_7 = 2154614781U;
signed char var_9 = (signed char)119;
int var_10 = -1458690421;
unsigned long long int var_12 = 18429921388370417972ULL;
unsigned long long int var_15 = 7264473930062022881ULL;
int zero = 0;
unsigned long long int var_16 = 6434809641723258295ULL;
unsigned int var_17 = 707687732U;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)45572;
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
