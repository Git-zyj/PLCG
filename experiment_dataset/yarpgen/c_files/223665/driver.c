#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)120;
short var_4 = (short)12942;
signed char var_6 = (signed char)40;
long long int var_9 = 5440335188843729052LL;
int zero = 0;
unsigned short var_10 = (unsigned short)26920;
int var_11 = 1273844386;
unsigned char var_12 = (unsigned char)206;
int var_13 = 1488554427;
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
