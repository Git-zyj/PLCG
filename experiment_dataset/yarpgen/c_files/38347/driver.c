#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_5 = -2682952709284944600LL;
_Bool var_8 = (_Bool)1;
long long int var_9 = -7566394351683911130LL;
unsigned short var_11 = (unsigned short)3119;
int zero = 0;
short var_12 = (short)-17901;
long long int var_13 = -4260467108410787643LL;
int var_14 = -1443094313;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
