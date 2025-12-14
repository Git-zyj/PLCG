#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2002539937554190001LL;
unsigned long long int var_1 = 10742021435109438091ULL;
unsigned char var_2 = (unsigned char)11;
signed char var_3 = (signed char)-108;
unsigned int var_4 = 1202510624U;
short var_7 = (short)25887;
_Bool var_10 = (_Bool)0;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 401020673U;
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
