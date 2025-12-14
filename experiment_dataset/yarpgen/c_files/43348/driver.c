#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4366113984897032225LL;
unsigned int var_2 = 170852197U;
int var_6 = -1418559499;
short var_7 = (short)-2164;
int var_9 = -761027891;
signed char var_10 = (signed char)-67;
long long int var_11 = -2853820378074456135LL;
unsigned int var_13 = 1147001346U;
unsigned char var_16 = (unsigned char)210;
int zero = 0;
long long int var_17 = -8368291979237276628LL;
unsigned char var_18 = (unsigned char)166;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
