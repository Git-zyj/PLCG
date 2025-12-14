#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6731005541838268966ULL;
signed char var_3 = (signed char)101;
long long int var_8 = -7446218030216896606LL;
signed char var_10 = (signed char)-66;
signed char var_12 = (signed char)93;
short var_14 = (short)26713;
signed char var_15 = (signed char)102;
int zero = 0;
unsigned short var_16 = (unsigned short)45071;
unsigned short var_17 = (unsigned short)48573;
long long int var_18 = -5031116431931929240LL;
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
