#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3668420800U;
unsigned int var_7 = 2914686124U;
unsigned long long int var_8 = 6803287799754935894ULL;
unsigned short var_11 = (unsigned short)8969;
unsigned int var_13 = 816883004U;
int zero = 0;
unsigned char var_16 = (unsigned char)145;
signed char var_17 = (signed char)-112;
void init() {
}

void checksum() {
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
