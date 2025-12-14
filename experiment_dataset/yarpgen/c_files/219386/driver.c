#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_7 = 1473044157U;
unsigned short var_11 = (unsigned short)6116;
long long int var_14 = 1540688642999183290LL;
unsigned int var_16 = 3894743978U;
int zero = 0;
unsigned long long int var_17 = 13840540491238339270ULL;
int var_18 = -260023683;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
