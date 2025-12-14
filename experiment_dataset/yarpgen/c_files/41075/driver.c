#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2384;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
short var_6 = (short)14096;
unsigned short var_7 = (unsigned short)50649;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-16747;
int zero = 0;
unsigned long long int var_11 = 12647674959501450250ULL;
unsigned int var_12 = 3264381566U;
long long int var_13 = 6396558075927955167LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
