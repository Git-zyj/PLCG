#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)34;
unsigned short var_1 = (unsigned short)56330;
unsigned char var_4 = (unsigned char)132;
unsigned short var_9 = (unsigned short)26423;
unsigned short var_10 = (unsigned short)3559;
int zero = 0;
unsigned int var_14 = 2518487518U;
long long int var_15 = -5989565113225444513LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
