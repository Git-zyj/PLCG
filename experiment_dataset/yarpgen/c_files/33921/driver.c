#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-87;
short var_8 = (short)26314;
unsigned short var_10 = (unsigned short)24287;
int zero = 0;
short var_12 = (short)-31224;
int var_13 = 540850241;
unsigned int var_14 = 3859110901U;
unsigned int var_15 = 1407985280U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
