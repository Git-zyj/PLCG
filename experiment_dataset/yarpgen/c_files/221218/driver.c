#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3233542042U;
signed char var_2 = (signed char)-96;
short var_4 = (short)-8105;
unsigned int var_5 = 701643685U;
unsigned int var_6 = 2924693676U;
long long int var_8 = 7893864775785198195LL;
unsigned int var_9 = 614531601U;
unsigned int var_10 = 2805117862U;
int zero = 0;
signed char var_11 = (signed char)-6;
short var_12 = (short)20824;
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
