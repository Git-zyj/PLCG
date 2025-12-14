#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 14205245161736314527ULL;
unsigned short var_11 = (unsigned short)12358;
int var_12 = 1501895075;
int var_15 = 458367265;
int zero = 0;
signed char var_16 = (signed char)-38;
short var_17 = (short)12943;
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
