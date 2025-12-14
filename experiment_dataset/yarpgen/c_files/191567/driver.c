#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5482572146303960803LL;
unsigned long long int var_7 = 5988926392575529477ULL;
int var_13 = 2146613168;
int var_16 = 1542087059;
unsigned short var_17 = (unsigned short)27266;
int zero = 0;
unsigned long long int var_18 = 1311186159766727923ULL;
int var_19 = -1813927793;
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
