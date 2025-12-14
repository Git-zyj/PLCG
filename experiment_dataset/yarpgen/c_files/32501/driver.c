#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21315;
signed char var_3 = (signed char)114;
unsigned int var_5 = 2832888656U;
unsigned long long int var_8 = 16432274022616421063ULL;
int var_9 = 225080437;
long long int var_11 = 5257063020669913082LL;
int zero = 0;
signed char var_12 = (signed char)3;
unsigned long long int var_13 = 12489294301267410075ULL;
unsigned short var_14 = (unsigned short)46447;
void init() {
}

void checksum() {
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
