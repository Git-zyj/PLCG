#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 2339955681617842802ULL;
unsigned long long int var_13 = 6301907781167493742ULL;
int zero = 0;
unsigned long long int var_15 = 18048598587486757929ULL;
unsigned long long int var_16 = 5500518401776114718ULL;
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
