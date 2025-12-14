#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-10475;
unsigned short var_6 = (unsigned short)16316;
_Bool var_8 = (_Bool)1;
int var_10 = 1639289648;
signed char var_11 = (signed char)46;
int var_13 = 1453945796;
unsigned char var_17 = (unsigned char)5;
int zero = 0;
unsigned char var_19 = (unsigned char)237;
unsigned short var_20 = (unsigned short)12570;
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
