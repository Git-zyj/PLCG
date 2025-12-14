#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4164070738U;
int var_4 = -928332616;
unsigned int var_11 = 176980363U;
int var_13 = 481534918;
int zero = 0;
unsigned int var_17 = 98876799U;
int var_18 = -246370798;
short var_19 = (short)23418;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
