#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4148913655U;
signed char var_3 = (signed char)10;
signed char var_4 = (signed char)122;
_Bool var_8 = (_Bool)0;
signed char var_12 = (signed char)-68;
int zero = 0;
short var_15 = (short)-8539;
signed char var_16 = (signed char)54;
signed char var_17 = (signed char)-52;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2236857336U;
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
