#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2696667045U;
int var_4 = 823984668;
long long int var_5 = 1325142705892858372LL;
long long int var_11 = -82644199956717177LL;
int zero = 0;
signed char var_18 = (signed char)-92;
unsigned long long int var_19 = 13154055032726692772ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
