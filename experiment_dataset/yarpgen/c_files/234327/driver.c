#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)229;
short var_1 = (short)-30960;
signed char var_2 = (signed char)13;
unsigned char var_3 = (unsigned char)86;
unsigned int var_5 = 1918308306U;
unsigned int var_9 = 3807696407U;
int zero = 0;
signed char var_10 = (signed char)-88;
int var_11 = -1665845345;
unsigned char var_12 = (unsigned char)169;
unsigned long long int var_13 = 16598623511401722074ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
