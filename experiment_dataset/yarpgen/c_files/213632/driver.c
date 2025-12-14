#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25443;
int var_2 = 1717975938;
unsigned char var_3 = (unsigned char)150;
unsigned char var_5 = (unsigned char)6;
signed char var_7 = (signed char)74;
int var_12 = -1710587911;
unsigned int var_13 = 3490131854U;
unsigned char var_16 = (unsigned char)49;
int zero = 0;
unsigned int var_17 = 4096485441U;
short var_18 = (short)-23098;
int var_19 = -1469368835;
unsigned short var_20 = (unsigned short)19092;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
