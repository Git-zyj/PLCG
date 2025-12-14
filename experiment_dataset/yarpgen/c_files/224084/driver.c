#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7933839426384382162LL;
unsigned short var_4 = (unsigned short)28013;
int var_8 = 1409495500;
long long int var_10 = 8112521956423901609LL;
int zero = 0;
unsigned short var_16 = (unsigned short)40205;
unsigned int var_17 = 3613949726U;
unsigned char var_18 = (unsigned char)23;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
