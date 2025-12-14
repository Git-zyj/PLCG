#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)62451;
_Bool var_4 = (_Bool)1;
long long int var_5 = -4423899588642727164LL;
short var_8 = (short)-23397;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)11183;
unsigned short var_15 = (unsigned short)17997;
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
