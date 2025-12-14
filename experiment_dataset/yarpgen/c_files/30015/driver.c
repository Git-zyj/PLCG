#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6699008877460964952ULL;
unsigned int var_8 = 4054513942U;
unsigned char var_10 = (unsigned char)238;
int zero = 0;
int var_11 = -1852155640;
unsigned short var_12 = (unsigned short)18877;
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
