#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28150;
unsigned int var_1 = 655122144U;
signed char var_4 = (signed char)3;
unsigned int var_11 = 4061696195U;
int zero = 0;
unsigned short var_12 = (unsigned short)43347;
unsigned char var_13 = (unsigned char)115;
int var_14 = 81894406;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
