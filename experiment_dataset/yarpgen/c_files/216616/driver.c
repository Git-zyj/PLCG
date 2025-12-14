#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)43019;
unsigned short var_4 = (unsigned short)26659;
unsigned int var_8 = 2190398588U;
int zero = 0;
long long int var_11 = 2563823071264889304LL;
long long int var_12 = 4634502928005014210LL;
long long int var_13 = 5371707917624212776LL;
signed char var_14 = (signed char)87;
unsigned int var_15 = 3752962460U;
void init() {
}

void checksum() {
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
