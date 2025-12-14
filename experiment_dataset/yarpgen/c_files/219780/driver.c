#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_4 = 542998185;
int var_8 = 599207067;
unsigned short var_10 = (unsigned short)16368;
short var_11 = (short)-28379;
int var_12 = 1393367047;
int var_13 = -1324446816;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 9241436309663769643ULL;
unsigned int var_16 = 1889741175U;
unsigned short var_17 = (unsigned short)18066;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
