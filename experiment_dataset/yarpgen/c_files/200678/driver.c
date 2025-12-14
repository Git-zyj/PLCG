#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8792803540904982354LL;
unsigned char var_1 = (unsigned char)211;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 2398249700U;
unsigned char var_10 = (unsigned char)157;
int zero = 0;
signed char var_11 = (signed char)66;
unsigned char var_12 = (unsigned char)235;
unsigned long long int var_13 = 2294382785946486530ULL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
