#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_16 = 9046782080932529671ULL;
unsigned long long int var_17 = 14384805041351238205ULL;
int var_19 = 272356724;
int zero = 0;
unsigned long long int var_20 = 8404392069640327512ULL;
long long int var_21 = 1146029913452315734LL;
void init() {
}

void checksum() {
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
