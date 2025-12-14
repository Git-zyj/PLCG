#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 12698325254565924172ULL;
unsigned long long int var_11 = 16081384280837035008ULL;
int zero = 0;
unsigned long long int var_12 = 9639294318257304544ULL;
unsigned long long int var_13 = 12259520768853682027ULL;
void init() {
}

void checksum() {
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
