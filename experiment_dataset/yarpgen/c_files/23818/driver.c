#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)26205;
signed char var_5 = (signed char)17;
unsigned long long int var_8 = 12878565505724752103ULL;
int var_13 = -1388296510;
unsigned short var_14 = (unsigned short)47120;
int zero = 0;
unsigned short var_20 = (unsigned short)69;
unsigned short var_21 = (unsigned short)46433;
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
