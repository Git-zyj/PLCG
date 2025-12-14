#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2878488110U;
short var_4 = (short)-10896;
short var_5 = (short)-31379;
short var_7 = (short)-32071;
short var_9 = (short)-15874;
int var_10 = 78609750;
unsigned short var_11 = (unsigned short)16895;
unsigned char var_15 = (unsigned char)151;
unsigned int var_18 = 3034465861U;
int zero = 0;
unsigned char var_19 = (unsigned char)43;
short var_20 = (short)-30359;
unsigned char var_21 = (unsigned char)244;
unsigned int var_22 = 12113632U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
