#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)24553;
long long int var_9 = 1292120531751147438LL;
unsigned int var_10 = 3221086656U;
short var_11 = (short)30901;
unsigned int var_12 = 2975962363U;
short var_14 = (short)1909;
int zero = 0;
long long int var_15 = -4472374692008860938LL;
short var_16 = (short)-3244;
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
