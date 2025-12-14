#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 427599804U;
unsigned long long int var_2 = 17123958958316677217ULL;
short var_4 = (short)-10248;
short var_8 = (short)-11798;
unsigned int var_10 = 2985488553U;
int zero = 0;
int var_11 = 210930563;
unsigned int var_12 = 4138794394U;
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
