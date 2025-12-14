#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 866669025;
int var_3 = -363674083;
int var_5 = -362029353;
int var_6 = 591907126;
int var_10 = -2024279766;
int var_11 = -2124155919;
int var_12 = 202777278;
int var_13 = -692976690;
int var_14 = -672811161;
int zero = 0;
int var_15 = -230695303;
int var_16 = 200510151;
void init() {
}

void checksum() {
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
