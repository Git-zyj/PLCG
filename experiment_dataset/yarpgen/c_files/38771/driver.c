#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2057;
long long int var_11 = -6590870469501667313LL;
signed char var_15 = (signed char)-40;
int zero = 0;
long long int var_17 = -972482305537808759LL;
signed char var_18 = (signed char)36;
signed char var_19 = (signed char)41;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
