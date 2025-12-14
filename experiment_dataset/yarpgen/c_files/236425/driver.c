#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)-46;
signed char var_8 = (signed char)87;
int var_10 = -37831456;
int var_14 = -734784786;
int zero = 0;
int var_20 = -1726287720;
int var_21 = -686696149;
unsigned char var_22 = (unsigned char)111;
unsigned char var_23 = (unsigned char)91;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
