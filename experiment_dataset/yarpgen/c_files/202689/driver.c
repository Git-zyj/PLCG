#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-15;
signed char var_2 = (signed char)97;
int var_3 = -279067053;
short var_4 = (short)-7962;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-84;
int var_12 = -679954232;
signed char var_15 = (signed char)4;
int zero = 0;
signed char var_16 = (signed char)84;
unsigned int var_17 = 1597039088U;
int var_18 = -1601802751;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
