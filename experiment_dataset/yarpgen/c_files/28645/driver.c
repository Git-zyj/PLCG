#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = 2145682865421070244LL;
signed char var_4 = (signed char)-119;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_17 = (short)5003;
unsigned long long int var_18 = 14423465544897630799ULL;
long long int var_19 = -6923033557408371729LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
