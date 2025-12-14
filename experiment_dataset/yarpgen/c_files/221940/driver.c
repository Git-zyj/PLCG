#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1288127164;
unsigned int var_4 = 3152810373U;
unsigned int var_5 = 3332798301U;
int var_8 = 1986291913;
unsigned int var_11 = 1979122851U;
unsigned int var_17 = 2292714064U;
int zero = 0;
unsigned int var_18 = 382337499U;
_Bool var_19 = (_Bool)1;
int var_20 = -131215078;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
