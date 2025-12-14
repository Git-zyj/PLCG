#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)157;
unsigned char var_4 = (unsigned char)60;
unsigned char var_7 = (unsigned char)166;
short var_8 = (short)-15274;
int zero = 0;
unsigned short var_15 = (unsigned short)45709;
unsigned int var_16 = 2780382871U;
long long int var_17 = -3755264297046972430LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
