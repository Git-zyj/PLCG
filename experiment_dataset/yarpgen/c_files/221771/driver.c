#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 669384242;
long long int var_4 = 8526436858792317538LL;
short var_6 = (short)-7642;
short var_8 = (short)2217;
unsigned char var_10 = (unsigned char)19;
int var_12 = 1664588109;
int zero = 0;
unsigned short var_13 = (unsigned short)14750;
unsigned short var_14 = (unsigned short)63599;
unsigned char var_15 = (unsigned char)172;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
