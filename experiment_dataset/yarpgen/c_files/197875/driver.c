#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)248;
int var_1 = 1432896802;
signed char var_4 = (signed char)20;
signed char var_5 = (signed char)9;
int var_10 = -1312622467;
unsigned int var_12 = 4285083174U;
int zero = 0;
unsigned int var_13 = 226839658U;
unsigned long long int var_14 = 17960491660230882625ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
