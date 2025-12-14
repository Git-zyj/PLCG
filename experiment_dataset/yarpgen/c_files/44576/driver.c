#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2997800941U;
signed char var_2 = (signed char)84;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 1026629382U;
unsigned char var_5 = (unsigned char)44;
int zero = 0;
short var_11 = (short)1471;
signed char var_12 = (signed char)39;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 462449320U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
