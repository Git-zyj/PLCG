#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13272605033256648221ULL;
unsigned short var_2 = (unsigned short)57864;
long long int var_9 = -4473977038549320261LL;
int var_10 = -185054387;
int zero = 0;
signed char var_11 = (signed char)53;
int var_12 = -157454882;
void init() {
}

void checksum() {
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
