#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -815862816;
unsigned char var_6 = (unsigned char)86;
long long int var_8 = -4164652250146681576LL;
int zero = 0;
short var_10 = (short)8266;
unsigned int var_11 = 1391746411U;
short var_12 = (short)-21831;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
