#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = -1133876530;
int var_8 = 1020146956;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)41122;
int var_15 = -767929362;
int zero = 0;
int var_16 = -401719203;
unsigned char var_17 = (unsigned char)212;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
