#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14209991269514700540ULL;
long long int var_1 = 3910400495243748071LL;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 337131105U;
unsigned long long int var_6 = 6772496924189806848ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 1636066881683255945ULL;
int zero = 0;
unsigned long long int var_11 = 3208645403820548965ULL;
long long int var_12 = -1371569810331254037LL;
_Bool var_13 = (_Bool)1;
long long int var_14 = -6215882232433127081LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
