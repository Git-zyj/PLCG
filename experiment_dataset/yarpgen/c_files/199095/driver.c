#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1063454091U;
short var_3 = (short)23767;
_Bool var_4 = (_Bool)1;
long long int var_11 = -2287663773979504037LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 12525721647202227250ULL;
unsigned int var_17 = 2857847945U;
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
