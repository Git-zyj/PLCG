#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41755;
unsigned short var_1 = (unsigned short)45865;
unsigned int var_2 = 569584054U;
_Bool var_4 = (_Bool)0;
unsigned int var_7 = 660392782U;
int var_8 = -1422662639;
unsigned long long int var_11 = 2204716097455077002ULL;
unsigned long long int var_14 = 7978959166131867796ULL;
int zero = 0;
short var_15 = (short)-742;
long long int var_16 = 7185515740733798643LL;
signed char var_17 = (signed char)103;
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
