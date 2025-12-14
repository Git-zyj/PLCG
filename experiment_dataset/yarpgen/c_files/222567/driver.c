#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)30654;
unsigned char var_2 = (unsigned char)90;
int var_3 = -577457544;
short var_5 = (short)-15677;
short var_7 = (short)-7539;
int var_8 = 1901265664;
short var_9 = (short)-16044;
long long int var_10 = -4554424687627253143LL;
short var_11 = (short)5139;
short var_12 = (short)-13181;
unsigned long long int var_13 = 18337567208834345108ULL;
int zero = 0;
unsigned int var_14 = 1391894649U;
unsigned short var_15 = (unsigned short)39901;
unsigned short var_16 = (unsigned short)61502;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
