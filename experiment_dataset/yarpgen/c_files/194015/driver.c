#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2272654462U;
unsigned char var_7 = (unsigned char)119;
unsigned int var_8 = 4010252824U;
int zero = 0;
unsigned int var_16 = 1715608756U;
unsigned char var_17 = (unsigned char)193;
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
