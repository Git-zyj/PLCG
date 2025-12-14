#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2917662502U;
unsigned long long int var_1 = 3223542917847648762ULL;
int zero = 0;
short var_10 = (short)12940;
unsigned short var_11 = (unsigned short)30438;
unsigned short var_12 = (unsigned short)48812;
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
