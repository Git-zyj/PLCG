#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 1091638093;
int var_8 = -192182112;
unsigned short var_11 = (unsigned short)54831;
int zero = 0;
unsigned int var_14 = 585515187U;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)177;
signed char var_17 = (signed char)-85;
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
