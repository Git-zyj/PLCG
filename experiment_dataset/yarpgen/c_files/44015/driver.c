#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2585753830U;
unsigned int var_1 = 1919091610U;
unsigned long long int var_2 = 17513294564076238009ULL;
int var_10 = 1424320614;
int zero = 0;
signed char var_11 = (signed char)13;
unsigned char var_12 = (unsigned char)222;
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
