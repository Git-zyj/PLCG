#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 625464337;
unsigned int var_6 = 4074821297U;
unsigned int var_11 = 3712831880U;
short var_14 = (short)1173;
unsigned long long int var_15 = 13172166015684561858ULL;
int zero = 0;
int var_16 = -1963611604;
signed char var_17 = (signed char)-75;
void init() {
}

void checksum() {
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
