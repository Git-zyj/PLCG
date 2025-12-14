#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1484788369;
unsigned long long int var_9 = 5843877396090374748ULL;
unsigned short var_10 = (unsigned short)43795;
int var_11 = 1936626585;
unsigned int var_16 = 1416160645U;
int zero = 0;
short var_18 = (short)-9551;
int var_19 = -1735737022;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
