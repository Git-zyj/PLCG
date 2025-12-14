#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_5 = (unsigned short)60283;
unsigned short var_16 = (unsigned short)2755;
long long int var_17 = -7852868137044345819LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-108;
signed char var_22 = (signed char)-79;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
