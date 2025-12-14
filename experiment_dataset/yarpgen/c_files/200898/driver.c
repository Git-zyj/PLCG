#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)25848;
int var_4 = -1205761162;
unsigned int var_5 = 2270964239U;
signed char var_7 = (signed char)19;
unsigned long long int var_10 = 18342200575500637782ULL;
int zero = 0;
unsigned long long int var_12 = 9878389219857393030ULL;
int var_13 = -1399083751;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
