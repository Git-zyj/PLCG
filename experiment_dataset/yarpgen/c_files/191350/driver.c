#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1078284513;
unsigned long long int var_6 = 7389985072562398544ULL;
unsigned short var_17 = (unsigned short)34273;
int zero = 0;
unsigned long long int var_19 = 15141358058401715307ULL;
unsigned long long int var_20 = 14434071355353365816ULL;
unsigned int var_21 = 2875784272U;
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
