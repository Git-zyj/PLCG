#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_4 = (_Bool)0;
short var_7 = (short)17426;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 3364784450U;
short var_15 = (short)23713;
int zero = 0;
long long int var_19 = 4017903268404458629LL;
unsigned int var_20 = 4190800026U;
void init() {
}

void checksum() {
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
