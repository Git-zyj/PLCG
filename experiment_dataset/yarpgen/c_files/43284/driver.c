#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)91;
long long int var_6 = 4702087670434045637LL;
int var_8 = -91733355;
unsigned long long int var_10 = 7851683975041827516ULL;
signed char var_11 = (signed char)73;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)59189;
int zero = 0;
unsigned long long int var_14 = 12919697401961219444ULL;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-84;
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
