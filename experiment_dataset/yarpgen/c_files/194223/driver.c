#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)47805;
unsigned int var_11 = 3512512961U;
unsigned long long int var_12 = 1941033354622076983ULL;
int zero = 0;
signed char var_13 = (signed char)-55;
unsigned short var_14 = (unsigned short)33200;
void init() {
}

void checksum() {
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
