#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 1786623098;
unsigned short var_6 = (unsigned short)423;
unsigned int var_7 = 295665232U;
unsigned short var_8 = (unsigned short)57264;
unsigned char var_9 = (unsigned char)28;
int zero = 0;
unsigned long long int var_12 = 18017919983360451198ULL;
unsigned int var_13 = 2252181562U;
short var_14 = (short)17503;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
