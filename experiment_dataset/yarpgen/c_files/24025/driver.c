#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1264134641;
unsigned long long int var_4 = 7658961020501665298ULL;
unsigned short var_5 = (unsigned short)31190;
unsigned char var_6 = (unsigned char)192;
unsigned short var_9 = (unsigned short)23899;
long long int var_10 = -3859037711835856026LL;
unsigned short var_11 = (unsigned short)45053;
unsigned int var_12 = 3620464132U;
unsigned short var_13 = (unsigned short)38159;
int zero = 0;
unsigned int var_14 = 3885918001U;
unsigned char var_15 = (unsigned char)38;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
