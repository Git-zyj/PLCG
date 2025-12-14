#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55604;
unsigned char var_5 = (unsigned char)123;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)29316;
int var_8 = 1127250900;
unsigned long long int var_9 = 1559475414828231629ULL;
int zero = 0;
int var_13 = -702745149;
unsigned char var_14 = (unsigned char)118;
int var_15 = -1394167388;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
