#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2860;
short var_4 = (short)-2847;
signed char var_11 = (signed char)-60;
unsigned char var_17 = (unsigned char)73;
int zero = 0;
long long int var_20 = 6470963496709551134LL;
unsigned char var_21 = (unsigned char)195;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
