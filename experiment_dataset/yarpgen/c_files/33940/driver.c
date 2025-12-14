#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_3 = -1514557668;
short var_7 = (short)3805;
int var_10 = -1407360376;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)-8;
int var_14 = 439678254;
unsigned short var_15 = (unsigned short)41212;
void init() {
}

void checksum() {
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
