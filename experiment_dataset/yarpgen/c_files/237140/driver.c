#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_4 = (short)9894;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 136885849U;
int zero = 0;
unsigned char var_14 = (unsigned char)188;
unsigned short var_15 = (unsigned short)62493;
int var_16 = -285460114;
int var_17 = 1076087624;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
