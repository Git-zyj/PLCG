#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_2 = (short)-15045;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
short var_9 = (short)5303;
int zero = 0;
int var_12 = -165822747;
short var_13 = (short)-7892;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
