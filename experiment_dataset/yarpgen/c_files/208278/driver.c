#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32438;
unsigned short var_2 = (unsigned short)50619;
int var_4 = 1753766537;
short var_7 = (short)-16363;
long long int var_17 = -9036712385687935091LL;
int zero = 0;
unsigned char var_19 = (unsigned char)171;
signed char var_20 = (signed char)-111;
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
