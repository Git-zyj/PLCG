#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)308;
int var_4 = -843790969;
long long int var_11 = 2915596388502355503LL;
int zero = 0;
long long int var_17 = -2769456789914097393LL;
short var_18 = (short)-20962;
short var_19 = (short)-21359;
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
