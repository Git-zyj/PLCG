#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5495497109118603436LL;
int var_3 = -245371806;
int var_5 = -864213537;
signed char var_6 = (signed char)27;
signed char var_10 = (signed char)-47;
unsigned long long int var_11 = 13972305189793264018ULL;
int zero = 0;
long long int var_16 = 6699619144622200765LL;
int var_17 = -268156397;
int var_18 = -50678786;
int var_19 = -1915452538;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
