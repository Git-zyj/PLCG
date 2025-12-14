#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)241;
unsigned char var_7 = (unsigned char)40;
short var_9 = (short)-29851;
short var_13 = (short)-27274;
int zero = 0;
unsigned long long int var_16 = 13667074279544333786ULL;
unsigned int var_17 = 1488050024U;
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
