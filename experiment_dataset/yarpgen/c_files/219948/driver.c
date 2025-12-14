#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 42647014U;
long long int var_5 = -5523569084872836989LL;
unsigned int var_7 = 2469659399U;
unsigned char var_13 = (unsigned char)243;
int zero = 0;
int var_15 = 262857173;
unsigned short var_16 = (unsigned short)38874;
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
