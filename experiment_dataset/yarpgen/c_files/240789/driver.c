#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31837;
unsigned int var_1 = 3075703292U;
short var_3 = (short)8830;
unsigned int var_10 = 2325732628U;
int zero = 0;
unsigned int var_11 = 4000537950U;
signed char var_12 = (signed char)8;
void init() {
}

void checksum() {
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
