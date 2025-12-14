#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-22868;
int var_6 = -1630282813;
unsigned int var_8 = 4243687145U;
unsigned short var_9 = (unsigned short)42963;
int zero = 0;
unsigned short var_11 = (unsigned short)53954;
unsigned long long int var_12 = 2060615379464830231ULL;
unsigned char var_13 = (unsigned char)4;
unsigned int var_14 = 3281927031U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
