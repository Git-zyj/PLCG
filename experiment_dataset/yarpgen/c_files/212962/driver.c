#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)25796;
unsigned long long int var_9 = 15638885140567067298ULL;
unsigned long long int var_12 = 4204980647002093095ULL;
int zero = 0;
int var_17 = 252934782;
unsigned long long int var_18 = 15316499274347411447ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
