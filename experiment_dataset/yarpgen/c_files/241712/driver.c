#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25714;
long long int var_5 = -4168186999525550785LL;
short var_11 = (short)-15821;
unsigned short var_12 = (unsigned short)23077;
int var_13 = -1082479421;
int var_14 = -1121391606;
long long int var_15 = 5430105162874502604LL;
int zero = 0;
long long int var_16 = 1079894910249140223LL;
long long int var_17 = -574881822771387626LL;
short var_18 = (short)-26400;
void init() {
}

void checksum() {
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
