#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32254;
long long int var_5 = -7955523065967048537LL;
unsigned char var_6 = (unsigned char)101;
unsigned int var_10 = 1700225400U;
unsigned char var_13 = (unsigned char)118;
unsigned char var_14 = (unsigned char)113;
int var_16 = -738186394;
int zero = 0;
unsigned int var_17 = 3027565013U;
unsigned char var_18 = (unsigned char)2;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
