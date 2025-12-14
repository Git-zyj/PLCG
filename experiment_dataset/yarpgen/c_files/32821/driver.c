#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)1302;
unsigned int var_7 = 1928152023U;
int var_10 = -357694274;
long long int var_13 = -7028454751820070620LL;
int zero = 0;
unsigned long long int var_15 = 6490371002947701128ULL;
int var_16 = 1655611702;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
