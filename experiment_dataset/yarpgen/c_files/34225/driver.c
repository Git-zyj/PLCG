#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1457940553684941739ULL;
unsigned int var_3 = 4112705687U;
unsigned short var_5 = (unsigned short)52527;
long long int var_8 = -8732471530770818841LL;
unsigned long long int var_9 = 2758962740208693749ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)61769;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)65256;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
