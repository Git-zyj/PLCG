#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)2364;
unsigned short var_6 = (unsigned short)8299;
long long int var_10 = -5816369028972038231LL;
int zero = 0;
long long int var_11 = -6170605845377625176LL;
long long int var_12 = -3851682088621756988LL;
unsigned short var_13 = (unsigned short)18664;
long long int var_14 = 6802305249445087378LL;
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
