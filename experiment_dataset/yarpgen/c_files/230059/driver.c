#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1979069306686686183LL;
int var_4 = -2121120207;
int var_6 = -417215422;
_Bool var_11 = (_Bool)0;
short var_14 = (short)3819;
unsigned char var_16 = (unsigned char)25;
int zero = 0;
unsigned char var_19 = (unsigned char)160;
int var_20 = -451991262;
unsigned long long int var_21 = 8538448867106456696ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
