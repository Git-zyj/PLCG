#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)63;
long long int var_6 = 7198971779410042932LL;
long long int var_11 = 8137205927533757586LL;
signed char var_13 = (signed char)-2;
unsigned int var_14 = 2693496247U;
int zero = 0;
unsigned long long int var_15 = 13201468648649537494ULL;
signed char var_16 = (signed char)(-127 - 1);
signed char var_17 = (signed char)34;
short var_18 = (short)-3623;
signed char var_19 = (signed char)118;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
