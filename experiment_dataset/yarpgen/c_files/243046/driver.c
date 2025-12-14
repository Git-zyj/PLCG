#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12407;
short var_7 = (short)-4940;
unsigned long long int var_11 = 15053415560741549842ULL;
int zero = 0;
unsigned int var_15 = 562308040U;
unsigned char var_16 = (unsigned char)85;
void init() {
}

void checksum() {
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
