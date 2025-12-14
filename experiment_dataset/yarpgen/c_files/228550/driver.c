#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)250;
_Bool var_1 = (_Bool)0;
long long int var_2 = -496500559761091628LL;
int var_6 = 89304824;
unsigned char var_9 = (unsigned char)135;
short var_10 = (short)31968;
int zero = 0;
unsigned int var_12 = 3385646261U;
signed char var_13 = (signed char)100;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
