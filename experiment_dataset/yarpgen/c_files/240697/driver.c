#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)0;
long long int var_7 = -5045962677873890904LL;
signed char var_10 = (signed char)29;
unsigned short var_11 = (unsigned short)23900;
int zero = 0;
unsigned int var_14 = 2369896634U;
unsigned int var_15 = 2928392094U;
short var_16 = (short)24291;
void init() {
}

void checksum() {
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
