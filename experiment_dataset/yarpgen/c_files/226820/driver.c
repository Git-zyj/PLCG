#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -297662696;
short var_9 = (short)-8828;
long long int var_11 = 4211011110564201745LL;
int zero = 0;
unsigned short var_12 = (unsigned short)8394;
unsigned short var_13 = (unsigned short)42240;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)26984;
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
