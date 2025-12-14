#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)118;
unsigned int var_7 = 2381547718U;
unsigned short var_8 = (unsigned short)49710;
unsigned short var_10 = (unsigned short)32887;
int zero = 0;
unsigned long long int var_15 = 16370918942923346377ULL;
unsigned short var_16 = (unsigned short)3428;
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
