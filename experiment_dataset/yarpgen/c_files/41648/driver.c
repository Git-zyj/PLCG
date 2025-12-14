#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 10415865081043559189ULL;
unsigned short var_6 = (unsigned short)37027;
unsigned int var_7 = 1034091727U;
int var_12 = 1456474614;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)24881;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)7043;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
