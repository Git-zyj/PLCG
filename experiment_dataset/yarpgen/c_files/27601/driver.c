#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1482;
long long int var_5 = 2693920940032114976LL;
unsigned long long int var_7 = 18401605564459064963ULL;
unsigned short var_9 = (unsigned short)10705;
int zero = 0;
int var_10 = -1739874299;
unsigned int var_11 = 2774834421U;
unsigned long long int var_12 = 14307658486931994870ULL;
long long int var_13 = -305201364960060171LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
