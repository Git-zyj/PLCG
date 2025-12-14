#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_7 = (unsigned short)28489;
long long int var_10 = 2655381295568321484LL;
unsigned short var_11 = (unsigned short)18346;
unsigned int var_13 = 1097621131U;
int zero = 0;
signed char var_17 = (signed char)83;
short var_18 = (short)9778;
void init() {
}

void checksum() {
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
