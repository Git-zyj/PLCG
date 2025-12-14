#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7926722242405391268ULL;
long long int var_5 = -2682537434409852439LL;
unsigned long long int var_7 = 14380294093480284907ULL;
unsigned long long int var_10 = 16029425802116698698ULL;
unsigned long long int var_11 = 14548770679795446465ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)234;
int var_16 = 678311452;
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
