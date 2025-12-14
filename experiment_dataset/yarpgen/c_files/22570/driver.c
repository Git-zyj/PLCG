#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)24;
unsigned char var_4 = (unsigned char)78;
long long int var_6 = -3456225843389532355LL;
_Bool var_7 = (_Bool)0;
unsigned short var_9 = (unsigned short)17523;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_14 = (short)-15772;
unsigned int var_15 = 2014215255U;
int var_16 = 774778320;
void init() {
}

void checksum() {
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
