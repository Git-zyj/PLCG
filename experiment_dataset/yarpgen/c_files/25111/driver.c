#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1675079078;
long long int var_4 = 1604117535405771307LL;
int var_7 = 803025903;
unsigned int var_10 = 3756687898U;
int zero = 0;
long long int var_11 = -2916209898589869727LL;
long long int var_12 = -3786232363225561782LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
