#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)106;
signed char var_7 = (signed char)-120;
short var_11 = (short)32358;
signed char var_12 = (signed char)-117;
short var_13 = (short)-890;
short var_14 = (short)13237;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_16 = (short)-17606;
_Bool var_17 = (_Bool)1;
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
