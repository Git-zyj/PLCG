#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)13648;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)52447;
unsigned int var_7 = 288906918U;
unsigned char var_10 = (unsigned char)33;
int var_11 = 1687245504;
int zero = 0;
unsigned long long int var_12 = 1437929705078539289ULL;
unsigned int var_13 = 2550957870U;
unsigned short var_14 = (unsigned short)40946;
_Bool var_15 = (_Bool)0;
long long int var_16 = 8274013234728892658LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
