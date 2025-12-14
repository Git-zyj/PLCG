#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3481486226U;
unsigned int var_1 = 634996463U;
unsigned int var_3 = 1434133621U;
short var_4 = (short)14950;
long long int var_5 = -6423169887641371674LL;
signed char var_6 = (signed char)116;
int zero = 0;
unsigned int var_10 = 870106229U;
short var_11 = (short)13845;
unsigned int var_12 = 3022801228U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
