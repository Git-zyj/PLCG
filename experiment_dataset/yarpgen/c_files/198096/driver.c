#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 396875792U;
short var_6 = (short)3600;
short var_7 = (short)-19555;
unsigned char var_8 = (unsigned char)169;
int zero = 0;
short var_10 = (short)-22510;
short var_11 = (short)-24301;
short var_12 = (short)-26318;
unsigned int var_13 = 359995499U;
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
