#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_3 = 7604584219709732094LL;
_Bool var_4 = (_Bool)0;
short var_6 = (short)14636;
short var_7 = (short)-13126;
long long int var_11 = -7370168845043080398LL;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-8559;
short var_17 = (short)-17483;
int zero = 0;
signed char var_18 = (signed char)78;
unsigned int var_19 = 1337009330U;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
