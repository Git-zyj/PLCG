#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2085331089U;
unsigned int var_2 = 1691605102U;
unsigned short var_3 = (unsigned short)36030;
unsigned short var_5 = (unsigned short)36598;
int var_6 = -1473198337;
unsigned short var_7 = (unsigned short)61560;
unsigned int var_8 = 1065216663U;
unsigned short var_10 = (unsigned short)8081;
unsigned int var_11 = 407339103U;
int zero = 0;
unsigned short var_12 = (unsigned short)42717;
int var_13 = 50918214;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
