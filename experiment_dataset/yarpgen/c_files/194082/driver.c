#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 877305820U;
_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 9843021480194002006ULL;
_Bool var_7 = (_Bool)0;
long long int var_8 = -2010297854075956258LL;
unsigned short var_9 = (unsigned short)60198;
unsigned int var_10 = 3367815487U;
unsigned long long int var_11 = 1073650196042261479ULL;
int zero = 0;
unsigned int var_12 = 386175299U;
unsigned int var_13 = 2852024527U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
