#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)152;
short var_12 = (short)-31889;
unsigned long long int var_13 = 1910213898374003443ULL;
int var_14 = 850991343;
int zero = 0;
short var_17 = (short)2421;
unsigned long long int var_18 = 5440581002911051396ULL;
short var_19 = (short)-30105;
signed char var_20 = (signed char)50;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
