#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48424;
short var_2 = (short)8728;
signed char var_5 = (signed char)-111;
unsigned int var_8 = 1739088149U;
unsigned long long int var_10 = 5686042170327080236ULL;
int zero = 0;
signed char var_16 = (signed char)-96;
short var_17 = (short)-15790;
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
