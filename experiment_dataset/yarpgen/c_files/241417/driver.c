#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-12813;
unsigned long long int var_3 = 4470560071309073552ULL;
unsigned int var_7 = 4022869994U;
int zero = 0;
short var_12 = (short)4268;
unsigned short var_13 = (unsigned short)45468;
long long int var_14 = -4964558618638625077LL;
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
