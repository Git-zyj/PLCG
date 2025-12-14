#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1944522870;
unsigned char var_6 = (unsigned char)218;
unsigned int var_8 = 640764919U;
short var_9 = (short)-633;
int zero = 0;
unsigned int var_13 = 3302553767U;
long long int var_14 = 7526057806293459929LL;
unsigned int var_15 = 872771466U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
