#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 12073417583995373275ULL;
int var_8 = 1835473834;
unsigned char var_10 = (unsigned char)227;
long long int var_11 = 3770904593294535065LL;
long long int var_16 = 315320988312140821LL;
unsigned short var_18 = (unsigned short)52592;
int zero = 0;
long long int var_19 = -3717210852098758490LL;
short var_20 = (short)1413;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
