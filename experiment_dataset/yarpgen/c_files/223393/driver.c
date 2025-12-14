#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2525534647836044477ULL;
short var_1 = (short)30887;
unsigned short var_3 = (unsigned short)33802;
int var_10 = -810848399;
signed char var_11 = (signed char)16;
int zero = 0;
unsigned short var_13 = (unsigned short)28292;
unsigned int var_14 = 3051458596U;
unsigned char var_15 = (unsigned char)11;
int var_16 = -1238125059;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
