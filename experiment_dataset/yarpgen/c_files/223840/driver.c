#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)24;
unsigned int var_4 = 759553420U;
signed char var_5 = (signed char)89;
unsigned int var_6 = 865855823U;
_Bool var_7 = (_Bool)1;
int zero = 0;
short var_10 = (short)14300;
long long int var_11 = -7043811882205678305LL;
signed char var_12 = (signed char)108;
long long int var_13 = -8686435510937232598LL;
signed char var_14 = (signed char)6;
unsigned short var_15 = (unsigned short)29005;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
