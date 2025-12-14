#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3235430069137017145ULL;
_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)-40;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 2363574807U;
long long int var_7 = 3063067341322708368LL;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 1060833933U;
int var_11 = 1447089747;
int zero = 0;
unsigned long long int var_12 = 12053447306988495698ULL;
unsigned long long int var_13 = 6220166814662396850ULL;
signed char var_14 = (signed char)80;
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
