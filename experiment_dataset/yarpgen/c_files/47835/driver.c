#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1718060469U;
short var_2 = (short)-20346;
long long int var_5 = 6283361814045581217LL;
int var_6 = -1805218760;
unsigned long long int var_7 = 1158805122310230252ULL;
int var_8 = 1164286821;
unsigned int var_12 = 3182658201U;
int var_14 = 728270539;
unsigned int var_15 = 941255859U;
int zero = 0;
unsigned short var_18 = (unsigned short)27510;
int var_19 = 1214902600;
int var_20 = -504185013;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
