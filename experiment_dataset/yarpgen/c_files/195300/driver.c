#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2525020168U;
_Bool var_4 = (_Bool)1;
unsigned char var_9 = (unsigned char)41;
_Bool var_11 = (_Bool)1;
short var_12 = (short)31667;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1239276015U;
unsigned char var_15 = (unsigned char)185;
short var_16 = (short)-14402;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
