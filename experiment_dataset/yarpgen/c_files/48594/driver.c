#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2777527315U;
unsigned char var_5 = (unsigned char)59;
short var_8 = (short)28864;
_Bool var_9 = (_Bool)1;
unsigned char var_14 = (unsigned char)133;
int zero = 0;
short var_15 = (short)29849;
unsigned char var_16 = (unsigned char)96;
unsigned int var_17 = 2230655898U;
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
