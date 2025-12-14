#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16447895914125040348ULL;
short var_4 = (short)18061;
short var_5 = (short)1873;
long long int var_6 = 5440504776637350338LL;
short var_10 = (short)16241;
int zero = 0;
unsigned char var_14 = (unsigned char)103;
unsigned int var_15 = 2041837093U;
signed char var_16 = (signed char)43;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
