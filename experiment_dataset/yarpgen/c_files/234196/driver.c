#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57145;
int var_1 = 1590101216;
long long int var_3 = 3245367816125154359LL;
unsigned int var_6 = 831437697U;
long long int var_11 = 6941376174955839894LL;
unsigned int var_12 = 958607175U;
int zero = 0;
short var_13 = (short)-7773;
int var_14 = -1409060915;
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
