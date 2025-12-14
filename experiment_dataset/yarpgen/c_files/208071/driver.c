#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1139630235U;
unsigned int var_1 = 960019698U;
int var_2 = 1526616096;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
int var_6 = -971094634;
unsigned int var_8 = 972716145U;
int var_10 = 785830700;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3234115057U;
int var_15 = -1376218668;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
