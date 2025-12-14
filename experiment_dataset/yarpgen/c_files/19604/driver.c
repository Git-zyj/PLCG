#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)171;
unsigned char var_3 = (unsigned char)186;
unsigned short var_4 = (unsigned short)31539;
unsigned long long int var_6 = 8530458772789977826ULL;
unsigned char var_8 = (unsigned char)125;
short var_9 = (short)19380;
int zero = 0;
unsigned int var_12 = 4107332936U;
short var_13 = (short)-2835;
short var_14 = (short)-30512;
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
