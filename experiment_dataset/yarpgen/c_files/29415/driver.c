#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)246;
unsigned int var_7 = 96086256U;
signed char var_8 = (signed char)-28;
int var_11 = -509502293;
int zero = 0;
unsigned long long int var_13 = 3621238518217801293ULL;
unsigned long long int var_14 = 16644137609620127547ULL;
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
