#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 468815985U;
unsigned long long int var_1 = 5609508921831127522ULL;
long long int var_2 = -842383380353162383LL;
signed char var_3 = (signed char)97;
int var_5 = 252215535;
signed char var_6 = (signed char)42;
int var_8 = -1092638704;
unsigned short var_10 = (unsigned short)25679;
int zero = 0;
unsigned int var_11 = 850266027U;
unsigned int var_12 = 3001759391U;
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
