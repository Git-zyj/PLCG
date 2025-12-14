#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28347;
short var_2 = (short)20634;
int var_3 = 833117240;
unsigned short var_13 = (unsigned short)1716;
int zero = 0;
unsigned short var_15 = (unsigned short)29223;
int var_16 = 771783879;
unsigned short var_17 = (unsigned short)16303;
unsigned char var_18 = (unsigned char)189;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
