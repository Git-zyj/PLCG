#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21446;
unsigned int var_3 = 414513378U;
unsigned char var_5 = (unsigned char)119;
unsigned long long int var_7 = 1046685926931827665ULL;
unsigned short var_8 = (unsigned short)48259;
unsigned char var_15 = (unsigned char)103;
int zero = 0;
unsigned int var_16 = 3417280859U;
unsigned long long int var_17 = 11905932815042728466ULL;
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
