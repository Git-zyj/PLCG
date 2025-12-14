#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)3;
unsigned long long int var_4 = 13078461789769385369ULL;
unsigned int var_5 = 961300373U;
short var_6 = (short)-9537;
short var_8 = (short)17055;
int zero = 0;
short var_10 = (short)23246;
unsigned short var_11 = (unsigned short)62892;
unsigned char var_12 = (unsigned char)203;
short var_13 = (short)28666;
long long int var_14 = 7083378384016677469LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
