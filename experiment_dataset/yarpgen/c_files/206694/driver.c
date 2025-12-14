#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34344;
long long int var_3 = 3815999817481810679LL;
int var_4 = 964124328;
short var_5 = (short)-13534;
long long int var_8 = 7279233318082897390LL;
short var_14 = (short)-31780;
int zero = 0;
unsigned char var_15 = (unsigned char)152;
unsigned short var_16 = (unsigned short)57376;
unsigned long long int var_17 = 4953518043694458790ULL;
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
