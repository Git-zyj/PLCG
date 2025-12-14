#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)30;
unsigned long long int var_4 = 4351152366554027882ULL;
unsigned long long int var_8 = 502511907143435927ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)170;
int var_12 = 1107054552;
long long int var_13 = -6228666144913854883LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
