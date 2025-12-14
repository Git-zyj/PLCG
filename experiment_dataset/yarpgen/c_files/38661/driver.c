#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)30810;
unsigned short var_5 = (unsigned short)19077;
unsigned int var_9 = 2956223243U;
unsigned char var_11 = (unsigned char)150;
int zero = 0;
long long int var_16 = 2592036170347092688LL;
short var_17 = (short)2734;
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
