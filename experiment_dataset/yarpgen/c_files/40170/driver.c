#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3089217133U;
unsigned int var_1 = 988824296U;
unsigned int var_2 = 4086349545U;
unsigned int var_3 = 3208289976U;
unsigned int var_4 = 4259166825U;
unsigned int var_7 = 2091349214U;
unsigned int var_8 = 730515292U;
unsigned int var_9 = 1807092848U;
int zero = 0;
unsigned int var_10 = 4122626174U;
unsigned int var_11 = 2696198131U;
unsigned int var_12 = 248169260U;
unsigned int var_13 = 292823271U;
unsigned int var_14 = 3338679485U;
unsigned int var_15 = 1656005756U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
