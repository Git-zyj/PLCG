#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 899506354U;
unsigned short var_8 = (unsigned short)37286;
long long int var_10 = -2708394445156621729LL;
int zero = 0;
long long int var_11 = -1945767440973639229LL;
long long int var_12 = -4313208554041390519LL;
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
