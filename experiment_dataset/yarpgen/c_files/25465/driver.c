#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)236;
short var_3 = (short)-32415;
short var_6 = (short)12789;
short var_10 = (short)29353;
unsigned short var_12 = (unsigned short)63931;
unsigned long long int var_14 = 15352735226769161818ULL;
int zero = 0;
short var_15 = (short)-7317;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-16396;
unsigned long long int var_18 = 4782994252196723631ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
