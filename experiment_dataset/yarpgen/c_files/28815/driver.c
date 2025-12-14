#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28847;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
long long int var_4 = -748576148718071444LL;
signed char var_5 = (signed char)-97;
_Bool var_6 = (_Bool)1;
long long int var_7 = -1976850271779829080LL;
unsigned long long int var_9 = 15591436152788725810ULL;
unsigned int var_11 = 78717712U;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = 2058527712;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 806671178490527748ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
