#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7363206210235324520LL;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)41;
_Bool var_11 = (_Bool)0;
unsigned int var_15 = 988408827U;
int var_16 = 1709217881;
int zero = 0;
short var_20 = (short)26226;
signed char var_21 = (signed char)-122;
signed char var_22 = (signed char)6;
unsigned long long int var_23 = 17379642304384058482ULL;
unsigned char var_24 = (unsigned char)117;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
