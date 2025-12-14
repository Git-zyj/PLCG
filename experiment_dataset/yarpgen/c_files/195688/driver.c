#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 878743901015310370ULL;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 1515936418U;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 2857281571U;
unsigned int var_8 = 828214331U;
int zero = 0;
short var_10 = (short)-29557;
unsigned long long int var_11 = 14144037437730257135ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
