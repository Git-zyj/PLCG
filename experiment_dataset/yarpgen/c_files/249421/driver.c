#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)21;
short var_4 = (short)-12434;
unsigned short var_9 = (unsigned short)61967;
unsigned char var_12 = (unsigned char)175;
int zero = 0;
long long int var_16 = -4718336902110808017LL;
unsigned int var_17 = 3793721257U;
void init() {
}

void checksum() {
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
