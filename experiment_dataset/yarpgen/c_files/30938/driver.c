#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)32750;
signed char var_4 = (signed char)-69;
short var_6 = (short)-22450;
unsigned short var_11 = (unsigned short)30174;
int zero = 0;
long long int var_14 = 1210503232066722115LL;
unsigned char var_15 = (unsigned char)164;
void init() {
}

void checksum() {
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
