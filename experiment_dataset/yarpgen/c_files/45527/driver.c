#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)53149;
unsigned char var_5 = (unsigned char)201;
int var_9 = 22948315;
unsigned long long int var_11 = 3885410877385312963ULL;
int zero = 0;
unsigned int var_13 = 4147118043U;
short var_14 = (short)739;
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
