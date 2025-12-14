#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 4286462247U;
_Bool var_6 = (_Bool)0;
long long int var_7 = 7087829956790680485LL;
unsigned char var_8 = (unsigned char)205;
signed char var_9 = (signed char)-122;
int zero = 0;
signed char var_10 = (signed char)92;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 2270724046U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
