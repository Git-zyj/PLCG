#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)65108;
long long int var_2 = 3193773159709056529LL;
short var_4 = (short)-170;
short var_7 = (short)-31126;
unsigned short var_11 = (unsigned short)39733;
_Bool var_15 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = 6559546384501165LL;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 2767946562U;
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
