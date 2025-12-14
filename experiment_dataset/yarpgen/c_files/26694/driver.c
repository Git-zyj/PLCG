#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-30126;
long long int var_6 = -7371211865418205496LL;
short var_8 = (short)28778;
unsigned short var_10 = (unsigned short)53613;
unsigned short var_12 = (unsigned short)32949;
int zero = 0;
unsigned short var_19 = (unsigned short)13235;
unsigned short var_20 = (unsigned short)42634;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
