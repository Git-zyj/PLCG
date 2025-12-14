#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1078001305U;
long long int var_1 = 2281654907597712172LL;
unsigned long long int var_2 = 5714535252965867351ULL;
long long int var_3 = -3573579235163269792LL;
unsigned long long int var_4 = 6941136635626893920ULL;
unsigned int var_5 = 1100948493U;
long long int var_7 = -216082822874932215LL;
int var_8 = 668458906;
unsigned long long int var_11 = 11799626090385285562ULL;
int zero = 0;
int var_12 = 1381398569;
unsigned int var_13 = 1642432974U;
signed char var_14 = (signed char)-99;
void init() {
}

void checksum() {
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
