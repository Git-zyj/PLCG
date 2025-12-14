#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64650;
short var_3 = (short)19750;
unsigned char var_6 = (unsigned char)142;
short var_7 = (short)14472;
short var_9 = (short)-22891;
long long int var_10 = -2457635575448383744LL;
int zero = 0;
signed char var_11 = (signed char)-20;
signed char var_12 = (signed char)-121;
unsigned long long int var_13 = 13808708168726318855ULL;
short var_14 = (short)5511;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
