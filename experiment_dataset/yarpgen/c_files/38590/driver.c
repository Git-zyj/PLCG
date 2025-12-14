#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12429376975292777297ULL;
unsigned char var_3 = (unsigned char)15;
unsigned long long int var_9 = 11801305452994615614ULL;
signed char var_11 = (signed char)-107;
int zero = 0;
unsigned short var_13 = (unsigned short)56933;
unsigned char var_14 = (unsigned char)72;
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
