#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 881831042U;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 1909160491U;
long long int var_13 = 4111618435074509295LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3553328951U;
unsigned int var_20 = 1625639954U;
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
