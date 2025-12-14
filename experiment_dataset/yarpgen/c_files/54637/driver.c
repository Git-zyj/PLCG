#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 347164533;
short var_5 = (short)-4979;
unsigned long long int var_6 = 12093504390662585462ULL;
int var_7 = -40149754;
unsigned short var_15 = (unsigned short)56767;
unsigned long long int var_16 = 3949171390235754170ULL;
int zero = 0;
int var_17 = 2017294931;
signed char var_18 = (signed char)-119;
void init() {
}

void checksum() {
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
