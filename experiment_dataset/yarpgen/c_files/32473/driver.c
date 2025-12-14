#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)199;
unsigned long long int var_1 = 1213784832707920033ULL;
unsigned char var_2 = (unsigned char)161;
unsigned char var_3 = (unsigned char)123;
int var_4 = 1438416159;
unsigned char var_5 = (unsigned char)70;
long long int var_6 = -8583598194098397086LL;
unsigned int var_7 = 2615396969U;
short var_10 = (short)-4387;
unsigned char var_11 = (unsigned char)101;
int var_12 = -1080142702;
int zero = 0;
long long int var_13 = -8461565041705617833LL;
int var_14 = -33169703;
void init() {
}

void checksum() {
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
