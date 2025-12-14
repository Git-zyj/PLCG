#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3777;
unsigned int var_1 = 708040628U;
long long int var_2 = 1338365250847232186LL;
unsigned short var_3 = (unsigned short)23675;
signed char var_5 = (signed char)-98;
int zero = 0;
unsigned char var_10 = (unsigned char)100;
signed char var_11 = (signed char)84;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
