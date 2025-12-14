#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1209025859U;
long long int var_7 = 4211218608440897810LL;
short var_15 = (short)-31512;
short var_16 = (short)-32205;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 81785515U;
long long int var_20 = -7729563035950866503LL;
unsigned short var_21 = (unsigned short)57757;
short var_22 = (short)-24263;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
