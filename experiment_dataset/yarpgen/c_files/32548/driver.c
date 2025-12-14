#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7987;
unsigned int var_6 = 2538029190U;
int var_7 = 1801308194;
int var_8 = 1232807082;
_Bool var_9 = (_Bool)1;
int var_12 = 1052448179;
signed char var_14 = (signed char)14;
int zero = 0;
int var_15 = -2017056422;
unsigned short var_16 = (unsigned short)58128;
int var_17 = 24006403;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
