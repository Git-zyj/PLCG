#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_10 = 17652565423346718533ULL;
unsigned short var_12 = (unsigned short)62340;
int zero = 0;
unsigned long long int var_14 = 10076756282323915829ULL;
unsigned short var_15 = (unsigned short)24270;
short var_16 = (short)1610;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
