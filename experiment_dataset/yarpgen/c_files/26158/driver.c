#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 17082539844547836494ULL;
unsigned long long int var_13 = 15657130919749351116ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)46553;
short var_16 = (short)-13093;
void init() {
}

void checksum() {
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
