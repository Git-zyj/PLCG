#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)107;
_Bool var_2 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned int var_10 = 512453521U;
long long int var_13 = -8830894398328221953LL;
unsigned short var_15 = (unsigned short)29198;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)5136;
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
