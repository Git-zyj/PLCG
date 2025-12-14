#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-117;
long long int var_2 = -434940801320542687LL;
unsigned short var_3 = (unsigned short)11323;
long long int var_6 = -7828774247366820029LL;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)49;
int var_10 = -1690715552;
long long int var_12 = 3747096897478691527LL;
int zero = 0;
unsigned char var_15 = (unsigned char)80;
unsigned int var_16 = 830269902U;
void init() {
}

void checksum() {
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
