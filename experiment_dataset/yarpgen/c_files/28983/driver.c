#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 7552434415120288086ULL;
signed char var_6 = (signed char)-64;
unsigned int var_8 = 1199467321U;
unsigned char var_11 = (unsigned char)15;
unsigned short var_13 = (unsigned short)64973;
unsigned char var_16 = (unsigned char)51;
int zero = 0;
signed char var_18 = (signed char)102;
int var_19 = 762695285;
unsigned short var_20 = (unsigned short)7205;
void init() {
}

void checksum() {
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
