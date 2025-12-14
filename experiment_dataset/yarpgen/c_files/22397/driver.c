#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3303349713501059449LL;
unsigned char var_2 = (unsigned char)240;
short var_3 = (short)-2223;
int var_10 = -877558375;
int zero = 0;
unsigned short var_12 = (unsigned short)43526;
signed char var_13 = (signed char)47;
long long int var_14 = -6303379828380627394LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
