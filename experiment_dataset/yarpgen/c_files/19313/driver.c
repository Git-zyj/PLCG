#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_2 = (unsigned short)12798;
int var_4 = 1808970361;
_Bool var_8 = (_Bool)0;
int var_10 = -2114415330;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 3673863459014991967ULL;
unsigned char var_14 = (unsigned char)109;
unsigned int var_16 = 3470557951U;
signed char var_18 = (signed char)24;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = -405986281;
signed char var_21 = (signed char)81;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
