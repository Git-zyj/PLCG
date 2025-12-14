#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3819241783U;
unsigned char var_6 = (unsigned char)84;
_Bool var_7 = (_Bool)1;
signed char var_10 = (signed char)60;
long long int var_11 = 4832192841599414844LL;
int zero = 0;
unsigned short var_19 = (unsigned short)14374;
int var_20 = -1005221334;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
