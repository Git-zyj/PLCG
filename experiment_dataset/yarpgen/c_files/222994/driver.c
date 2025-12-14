#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)55921;
long long int var_4 = -4832253590109607008LL;
short var_9 = (short)-20390;
signed char var_11 = (signed char)77;
long long int var_13 = 1841145511771973451LL;
signed char var_14 = (signed char)33;
int zero = 0;
unsigned long long int var_16 = 11978663112094216845ULL;
_Bool var_17 = (_Bool)0;
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
