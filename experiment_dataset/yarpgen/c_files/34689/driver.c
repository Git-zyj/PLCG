#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 328678691560405969ULL;
short var_6 = (short)-5542;
unsigned long long int var_11 = 15526058428623845321ULL;
unsigned long long int var_12 = 6069643285375229551ULL;
unsigned short var_16 = (unsigned short)9853;
short var_18 = (short)-12904;
long long int var_19 = -8114892470304484955LL;
int zero = 0;
unsigned int var_20 = 1699282250U;
unsigned long long int var_21 = 14645925044371393456ULL;
unsigned long long int var_22 = 1470376280316318252ULL;
long long int var_23 = 5300628833936627324LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
