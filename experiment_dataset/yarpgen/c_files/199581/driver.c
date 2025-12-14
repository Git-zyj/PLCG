#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_5 = (unsigned short)8697;
long long int var_8 = 6701295377401365531LL;
unsigned short var_12 = (unsigned short)21053;
int zero = 0;
signed char var_13 = (signed char)-70;
unsigned short var_14 = (unsigned short)37544;
unsigned char var_15 = (unsigned char)47;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
