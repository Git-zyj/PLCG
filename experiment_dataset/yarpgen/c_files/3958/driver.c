#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
short var_2 = (short)-17246;
int var_3 = 1206232039;
short var_6 = (short)-11601;
signed char var_9 = (signed char)33;
int var_10 = -1701340033;
int zero = 0;
int var_12 = -435521689;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-4290;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
