#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17858783473793824688ULL;
unsigned long long int var_10 = 10462136317722630061ULL;
int zero = 0;
unsigned long long int var_15 = 4037942050675718953ULL;
unsigned long long int var_16 = 3118301732837308181ULL;
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
