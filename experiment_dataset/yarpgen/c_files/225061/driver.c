#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 54570358U;
int var_12 = 560483041;
signed char var_17 = (signed char)38;
int zero = 0;
unsigned long long int var_18 = 8230222230387401888ULL;
unsigned char var_19 = (unsigned char)69;
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
