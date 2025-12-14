#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 66910588U;
long long int var_4 = 6592294965145138696LL;
unsigned int var_5 = 2769910224U;
short var_8 = (short)-2453;
short var_10 = (short)-20534;
unsigned short var_12 = (unsigned short)24821;
signed char var_14 = (signed char)92;
int zero = 0;
short var_17 = (short)-10185;
int var_18 = 751748729;
void init() {
}

void checksum() {
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
