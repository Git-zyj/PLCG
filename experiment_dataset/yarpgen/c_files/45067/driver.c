#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1572304304493271455ULL;
signed char var_3 = (signed char)31;
unsigned int var_5 = 981695512U;
long long int var_8 = -7414064785964794616LL;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 1396414586U;
unsigned int var_14 = 2028235234U;
unsigned int var_15 = 3481020896U;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 8527689233189542111ULL;
unsigned int var_18 = 2880512132U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
