#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1941781378U;
unsigned int var_2 = 4291338163U;
signed char var_8 = (signed char)7;
int zero = 0;
signed char var_11 = (signed char)116;
unsigned short var_12 = (unsigned short)50960;
unsigned int var_13 = 1816451666U;
long long int var_14 = 5692514832620017106LL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
