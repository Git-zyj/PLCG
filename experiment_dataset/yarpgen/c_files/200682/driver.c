#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26426;
short var_4 = (short)-8302;
short var_5 = (short)-5053;
short var_8 = (short)27959;
int zero = 0;
int var_10 = 802188021;
unsigned char var_11 = (unsigned char)175;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
