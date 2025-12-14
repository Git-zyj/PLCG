#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1967659770U;
unsigned char var_1 = (unsigned char)12;
signed char var_4 = (signed char)87;
int var_5 = 2063010226;
long long int var_6 = -8042307056765029858LL;
short var_7 = (short)-8050;
short var_9 = (short)-27327;
int zero = 0;
unsigned short var_10 = (unsigned short)14628;
unsigned long long int var_11 = 8818700144292044041ULL;
unsigned int var_12 = 1586044810U;
signed char var_13 = (signed char)-111;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
