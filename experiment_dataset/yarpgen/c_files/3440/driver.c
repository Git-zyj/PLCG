#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 15042746472750265632ULL;
int var_9 = -33741504;
unsigned long long int var_17 = 9631914323981575644ULL;
int zero = 0;
unsigned int var_18 = 2231755444U;
unsigned long long int var_19 = 16711500554032066435ULL;
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
