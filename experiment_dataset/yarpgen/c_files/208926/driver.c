#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1283145128;
unsigned short var_4 = (unsigned short)44911;
int var_7 = 477431906;
unsigned int var_11 = 364458225U;
int zero = 0;
signed char var_12 = (signed char)-60;
unsigned char var_13 = (unsigned char)167;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
