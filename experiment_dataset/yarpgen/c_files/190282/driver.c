#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)2377;
signed char var_4 = (signed char)92;
unsigned int var_5 = 960138767U;
signed char var_6 = (signed char)69;
unsigned long long int var_14 = 7725787552977348286ULL;
int zero = 0;
int var_18 = 2085062980;
unsigned long long int var_19 = 15808297877826898474ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
