#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 740916874;
int var_1 = 712108387;
unsigned char var_4 = (unsigned char)110;
long long int var_5 = -2794574243479380496LL;
int var_8 = -111070843;
unsigned char var_10 = (unsigned char)88;
int var_11 = 2067957605;
int var_12 = -1631400950;
unsigned char var_13 = (unsigned char)219;
int zero = 0;
int var_14 = 579828885;
unsigned char var_15 = (unsigned char)252;
unsigned char var_16 = (unsigned char)23;
void init() {
}

void checksum() {
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
