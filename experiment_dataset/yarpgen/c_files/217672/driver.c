#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31665;
int var_5 = 1137061777;
unsigned int var_7 = 904012192U;
signed char var_9 = (signed char)91;
int zero = 0;
unsigned int var_14 = 3802655333U;
unsigned long long int var_15 = 16666064514819387703ULL;
void init() {
}

void checksum() {
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
