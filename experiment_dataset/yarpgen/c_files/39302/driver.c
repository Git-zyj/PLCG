#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62690;
unsigned char var_2 = (unsigned char)199;
unsigned int var_5 = 2181766427U;
short var_13 = (short)7945;
unsigned long long int var_15 = 5313481249739335100ULL;
int zero = 0;
unsigned int var_16 = 3322599444U;
unsigned int var_17 = 1263194141U;
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
