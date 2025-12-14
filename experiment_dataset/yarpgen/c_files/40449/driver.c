#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2333097928U;
unsigned short var_2 = (unsigned short)10688;
unsigned int var_8 = 3898398415U;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_12 = 1169201952769003408LL;
unsigned short var_13 = (unsigned short)32511;
short var_14 = (short)-4687;
unsigned int var_15 = 3695851234U;
long long int var_16 = -3243667929421200722LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
