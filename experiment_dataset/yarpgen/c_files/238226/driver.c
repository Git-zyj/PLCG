#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)23056;
short var_3 = (short)-9941;
unsigned long long int var_6 = 5285213112993866759ULL;
unsigned long long int var_7 = 5274564364947613883ULL;
unsigned int var_11 = 3744192029U;
int zero = 0;
unsigned short var_12 = (unsigned short)18094;
unsigned long long int var_13 = 15625460687628354928ULL;
short var_14 = (short)32129;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
