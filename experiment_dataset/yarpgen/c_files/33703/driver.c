#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)48;
short var_8 = (short)17866;
int var_9 = 1425219803;
unsigned char var_13 = (unsigned char)2;
unsigned int var_16 = 565031922U;
int zero = 0;
int var_18 = -1912903975;
unsigned char var_19 = (unsigned char)219;
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
