#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58600;
long long int var_1 = 7319368465717816820LL;
int var_6 = 2089018884;
long long int var_8 = 7065749425726483409LL;
short var_9 = (short)-14761;
short var_10 = (short)23498;
int zero = 0;
long long int var_14 = -764804436570833420LL;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)160;
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
