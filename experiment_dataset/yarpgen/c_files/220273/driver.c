#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1061549040U;
unsigned int var_8 = 2520851531U;
short var_9 = (short)-12876;
unsigned long long int var_14 = 8392521603428468402ULL;
_Bool var_15 = (_Bool)1;
long long int var_16 = 812595342959808783LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)71;
unsigned long long int var_21 = 371659246437171631ULL;
unsigned long long int var_22 = 9250956794119490582ULL;
long long int var_23 = -5300754062503365972LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
