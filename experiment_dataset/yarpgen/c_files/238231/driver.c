#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 990775112U;
_Bool var_6 = (_Bool)0;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-4731;
unsigned int var_11 = 140668730U;
unsigned short var_12 = (unsigned short)31677;
long long int var_15 = 3102713783579926378LL;
int zero = 0;
unsigned short var_17 = (unsigned short)23471;
short var_18 = (short)-21238;
signed char var_19 = (signed char)-40;
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
