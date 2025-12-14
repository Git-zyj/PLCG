#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 205289252;
int var_3 = 55769197;
long long int var_6 = -2017431450438194654LL;
unsigned short var_10 = (unsigned short)48845;
unsigned char var_13 = (unsigned char)204;
int zero = 0;
short var_14 = (short)3728;
unsigned int var_15 = 1001613440U;
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
