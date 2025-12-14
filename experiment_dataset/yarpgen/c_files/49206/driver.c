#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 392618496;
int var_1 = 1594486829;
int var_4 = -2144207555;
unsigned int var_8 = 1998432654U;
int zero = 0;
int var_10 = -1297471017;
unsigned char var_11 = (unsigned char)89;
unsigned long long int var_12 = 16785907417027144850ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
