#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2683823782U;
unsigned long long int var_7 = 10234757611542562178ULL;
unsigned char var_11 = (unsigned char)119;
int zero = 0;
unsigned int var_15 = 3991148966U;
signed char var_16 = (signed char)-86;
unsigned int var_17 = 1694073568U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
