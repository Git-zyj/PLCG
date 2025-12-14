#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)4668;
signed char var_6 = (signed char)46;
long long int var_7 = 7344054489549968201LL;
unsigned short var_8 = (unsigned short)8010;
unsigned long long int var_11 = 1954883014334513956ULL;
int zero = 0;
long long int var_15 = 1330002018837728113LL;
int var_16 = -2032547593;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
