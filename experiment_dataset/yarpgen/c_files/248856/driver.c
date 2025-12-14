#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_4 = -6266720413514051280LL;
unsigned int var_8 = 494825796U;
int var_10 = 1681286550;
int zero = 0;
unsigned char var_11 = (unsigned char)204;
long long int var_12 = 8349799804768017450LL;
signed char var_13 = (signed char)29;
long long int var_14 = -5170516630590309507LL;
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
