#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)3;
short var_3 = (short)-20379;
long long int var_7 = -3859364080572221186LL;
long long int var_9 = 2659816198138780768LL;
int var_10 = -283372431;
int zero = 0;
unsigned int var_12 = 2413663573U;
unsigned long long int var_13 = 16488790751105023308ULL;
unsigned short var_14 = (unsigned short)38194;
int var_15 = -1932745515;
unsigned short var_16 = (unsigned short)11331;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
