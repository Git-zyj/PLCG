#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)32;
unsigned short var_6 = (unsigned short)25739;
unsigned long long int var_8 = 2994988833606181957ULL;
int zero = 0;
unsigned int var_11 = 3815382125U;
unsigned long long int var_12 = 18220918842110737520ULL;
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
