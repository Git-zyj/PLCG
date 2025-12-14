#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-65;
signed char var_3 = (signed char)88;
short var_4 = (short)-32757;
short var_6 = (short)2538;
int var_7 = 1043308498;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 5238452709985446650ULL;
unsigned int var_14 = 1184592842U;
int zero = 0;
int var_16 = -464698130;
short var_17 = (short)-18314;
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
