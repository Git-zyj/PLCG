#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_2 = (unsigned short)3888;
unsigned char var_7 = (unsigned char)152;
_Bool var_8 = (_Bool)1;
long long int var_9 = 1970977066899973651LL;
int zero = 0;
unsigned long long int var_15 = 17953570227402363469ULL;
unsigned int var_16 = 4118601499U;
unsigned long long int var_17 = 3814833685914194962ULL;
int var_18 = -1991100034;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
