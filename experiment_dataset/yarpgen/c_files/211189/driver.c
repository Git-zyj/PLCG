#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 446477444;
signed char var_4 = (signed char)-55;
signed char var_7 = (signed char)64;
long long int var_10 = 8962223077752857789LL;
unsigned int var_13 = 4087381018U;
int zero = 0;
long long int var_14 = -5283702461489617535LL;
long long int var_15 = -5100521098046951805LL;
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
