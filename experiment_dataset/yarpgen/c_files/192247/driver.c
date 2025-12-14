#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3931562853U;
unsigned int var_3 = 2018926265U;
unsigned int var_6 = 3189093856U;
unsigned int var_8 = 3555165947U;
unsigned int var_10 = 1899336101U;
unsigned int var_12 = 3750399514U;
int zero = 0;
unsigned int var_13 = 706866773U;
unsigned int var_14 = 387023561U;
unsigned int var_15 = 4032942344U;
unsigned int var_16 = 3649323048U;
unsigned int var_17 = 1501258822U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
