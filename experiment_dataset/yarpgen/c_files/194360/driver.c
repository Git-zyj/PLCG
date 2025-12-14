#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)176;
unsigned long long int var_7 = 10776961297230232293ULL;
unsigned int var_11 = 1671132517U;
int zero = 0;
long long int var_12 = -1381377352495835494LL;
unsigned char var_13 = (unsigned char)151;
unsigned int var_14 = 4244767267U;
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
