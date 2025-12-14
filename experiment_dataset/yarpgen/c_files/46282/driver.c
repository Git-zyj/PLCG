#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9668;
signed char var_2 = (signed char)-44;
unsigned long long int var_4 = 9938677089538206989ULL;
unsigned short var_6 = (unsigned short)73;
int zero = 0;
short var_12 = (short)-22623;
unsigned char var_13 = (unsigned char)242;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
