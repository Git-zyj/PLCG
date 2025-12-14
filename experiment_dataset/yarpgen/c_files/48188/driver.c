#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1579933505884616168ULL;
long long int var_2 = -4114561182904593526LL;
unsigned int var_6 = 2021863272U;
_Bool var_15 = (_Bool)1;
int zero = 0;
int var_17 = -1841641664;
unsigned int var_18 = 2034544212U;
long long int var_19 = -7092998907033406172LL;
signed char var_20 = (signed char)-59;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
