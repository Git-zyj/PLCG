#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15673845953046362249ULL;
_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 11733680391775858629ULL;
unsigned short var_11 = (unsigned short)39275;
unsigned char var_12 = (unsigned char)165;
unsigned int var_13 = 881953389U;
int zero = 0;
unsigned long long int var_14 = 11025581985518160642ULL;
int var_15 = 267761149;
unsigned short var_16 = (unsigned short)58009;
unsigned char var_17 = (unsigned char)237;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
