#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10418692010257796400ULL;
_Bool var_3 = (_Bool)0;
short var_6 = (short)-6421;
unsigned long long int var_8 = 5377509256851892504ULL;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)26285;
unsigned short var_13 = (unsigned short)57078;
signed char var_14 = (signed char)75;
short var_15 = (short)-24498;
int zero = 0;
unsigned short var_16 = (unsigned short)45456;
unsigned long long int var_17 = 4413159832932848135ULL;
short var_18 = (short)-4648;
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
