#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3640267762U;
long long int var_1 = -1080983340483822499LL;
unsigned short var_2 = (unsigned short)3826;
unsigned int var_5 = 1526305193U;
unsigned char var_9 = (unsigned char)243;
unsigned long long int var_11 = 15512001932685576482ULL;
unsigned int var_14 = 2302609150U;
int zero = 0;
short var_16 = (short)-11261;
signed char var_17 = (signed char)110;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
