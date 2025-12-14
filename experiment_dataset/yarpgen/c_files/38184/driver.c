#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
unsigned int var_11 = 4253714352U;
unsigned int var_13 = 207926468U;
short var_14 = (short)-1763;
long long int var_15 = 7008655298887001620LL;
int zero = 0;
short var_19 = (short)29857;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-31794;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
