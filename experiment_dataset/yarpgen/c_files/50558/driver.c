#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-120;
_Bool var_4 = (_Bool)1;
short var_10 = (short)3729;
signed char var_11 = (signed char)88;
unsigned int var_13 = 1717942582U;
int zero = 0;
unsigned char var_15 = (unsigned char)141;
long long int var_16 = -918933282219325361LL;
short var_17 = (short)24774;
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
