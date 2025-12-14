#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)16;
unsigned int var_3 = 4194731692U;
unsigned char var_6 = (unsigned char)25;
int zero = 0;
long long int var_14 = -100168387519481448LL;
unsigned long long int var_15 = 2836737228771368740ULL;
unsigned int var_16 = 992072723U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
