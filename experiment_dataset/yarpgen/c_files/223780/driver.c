#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 817495235;
unsigned char var_3 = (unsigned char)46;
unsigned char var_9 = (unsigned char)54;
long long int var_13 = 7220067036856514461LL;
long long int var_14 = 5433445547825176756LL;
unsigned short var_16 = (unsigned short)42552;
unsigned short var_17 = (unsigned short)6086;
int zero = 0;
int var_19 = 896347389;
unsigned int var_20 = 1185739928U;
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
