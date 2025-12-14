#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 2976273226U;
unsigned char var_4 = (unsigned char)60;
short var_5 = (short)8240;
unsigned long long int var_6 = 1201134352572716659ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)-62;
long long int var_14 = 2888026799306414319LL;
short var_15 = (short)-28992;
void init() {
}

void checksum() {
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
