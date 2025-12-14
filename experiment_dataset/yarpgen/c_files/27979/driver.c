#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
int var_4 = 449967889;
signed char var_6 = (signed char)6;
int var_7 = -254787166;
unsigned long long int var_8 = 9662954093973505691ULL;
int zero = 0;
signed char var_10 = (signed char)-31;
short var_11 = (short)3477;
short var_12 = (short)-9971;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
