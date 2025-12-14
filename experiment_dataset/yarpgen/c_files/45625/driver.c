#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)21922;
int var_8 = -847606644;
unsigned int var_9 = 1279117353U;
unsigned int var_12 = 2704405835U;
int zero = 0;
signed char var_13 = (signed char)80;
unsigned long long int var_14 = 5972244005123279194ULL;
unsigned short var_15 = (unsigned short)46452;
int var_16 = -959146524;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
