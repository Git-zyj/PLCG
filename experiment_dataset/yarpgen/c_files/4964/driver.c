#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17051087345266459135ULL;
unsigned long long int var_5 = 9794763788736655207ULL;
short var_7 = (short)6951;
int zero = 0;
unsigned char var_11 = (unsigned char)122;
long long int var_12 = -6898468453943519352LL;
unsigned char var_13 = (unsigned char)218;
int var_14 = -2145626938;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
