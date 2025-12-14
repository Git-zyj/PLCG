#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13219;
long long int var_2 = 8523159825518592462LL;
unsigned short var_6 = (unsigned short)58214;
unsigned int var_7 = 780209965U;
unsigned short var_10 = (unsigned short)17808;
unsigned short var_11 = (unsigned short)21572;
int zero = 0;
unsigned int var_12 = 3030249799U;
unsigned int var_13 = 3966904881U;
short var_14 = (short)-29209;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
