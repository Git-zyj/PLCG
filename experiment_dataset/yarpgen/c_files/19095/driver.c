#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 840812407U;
long long int var_6 = -3111864641437885865LL;
int var_7 = -61967378;
unsigned int var_8 = 48713264U;
unsigned char var_13 = (unsigned char)86;
unsigned int var_14 = 3623203340U;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_19 = 4692499838687084928LL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
