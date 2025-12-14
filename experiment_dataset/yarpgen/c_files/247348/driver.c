#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned long long int var_8 = 16172103386815755130ULL;
unsigned int var_12 = 4164388627U;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 13459937546481300320ULL;
unsigned int var_16 = 2492166610U;
short var_17 = (short)-11343;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
