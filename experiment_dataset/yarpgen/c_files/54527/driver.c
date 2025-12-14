#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_12 = 468196425;
unsigned short var_16 = (unsigned short)12165;
unsigned int var_17 = 3122442134U;
int zero = 0;
unsigned char var_19 = (unsigned char)216;
unsigned int var_20 = 1359751403U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
