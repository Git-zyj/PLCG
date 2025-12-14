#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)128;
unsigned long long int var_4 = 9674103966785348964ULL;
short var_6 = (short)14493;
int var_9 = -1711195813;
unsigned int var_14 = 2496643157U;
unsigned long long int var_15 = 889525150459597013ULL;
int zero = 0;
unsigned long long int var_16 = 1228719601379174768ULL;
unsigned int var_17 = 3325298071U;
void init() {
}

void checksum() {
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
