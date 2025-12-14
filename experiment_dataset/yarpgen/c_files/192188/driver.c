#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2697525462330030102LL;
short var_1 = (short)-18483;
int var_3 = 2049213811;
unsigned short var_5 = (unsigned short)2384;
signed char var_8 = (signed char)69;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = 3859488815577719653LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
