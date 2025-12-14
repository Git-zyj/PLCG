#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)4;
unsigned char var_2 = (unsigned char)218;
unsigned char var_11 = (unsigned char)192;
unsigned char var_15 = (unsigned char)2;
int zero = 0;
unsigned int var_17 = 1405123492U;
unsigned char var_18 = (unsigned char)108;
signed char var_19 = (signed char)0;
unsigned char var_20 = (unsigned char)182;
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
