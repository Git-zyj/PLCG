#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33517;
short var_1 = (short)10389;
unsigned int var_5 = 2187184639U;
unsigned int var_6 = 457385117U;
int var_8 = 1196864810;
unsigned int var_10 = 1742216278U;
int zero = 0;
unsigned short var_13 = (unsigned short)36500;
unsigned char var_14 = (unsigned char)248;
unsigned long long int var_15 = 4523690264218895247ULL;
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
