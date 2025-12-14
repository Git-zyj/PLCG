#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5483299707276693900LL;
short var_2 = (short)-2984;
short var_8 = (short)28207;
short var_11 = (short)-7072;
signed char var_14 = (signed char)-8;
int var_18 = 485977473;
int zero = 0;
long long int var_20 = -1558711984000626333LL;
unsigned long long int var_21 = 8392051397002594527ULL;
int var_22 = 1283262362;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
