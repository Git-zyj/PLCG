#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 12857479258816785428ULL;
unsigned long long int var_5 = 5609316375741623721ULL;
short var_9 = (short)23961;
short var_10 = (short)10389;
unsigned short var_11 = (unsigned short)42805;
signed char var_15 = (signed char)-125;
short var_16 = (short)-28709;
int zero = 0;
short var_17 = (short)-29812;
signed char var_18 = (signed char)-32;
unsigned short var_19 = (unsigned short)458;
unsigned short var_20 = (unsigned short)7262;
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
