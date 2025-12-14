#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2046348410U;
int var_1 = -1968349175;
unsigned int var_2 = 3259675954U;
unsigned char var_3 = (unsigned char)246;
int var_5 = -1127955080;
unsigned int var_6 = 1918679257U;
int var_8 = 825498620;
unsigned int var_12 = 672425198U;
unsigned short var_16 = (unsigned short)3526;
int zero = 0;
unsigned int var_18 = 2006942196U;
unsigned char var_19 = (unsigned char)72;
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
