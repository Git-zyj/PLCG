#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 400718325810736093ULL;
unsigned long long int var_1 = 4536759358184879235ULL;
unsigned char var_3 = (unsigned char)113;
long long int var_6 = -8302635287080640241LL;
int var_7 = 496958704;
unsigned long long int var_8 = 214857188123746325ULL;
unsigned char var_10 = (unsigned char)222;
int zero = 0;
unsigned long long int var_11 = 13612216559902481520ULL;
short var_12 = (short)-9769;
short var_13 = (short)-31146;
void init() {
}

void checksum() {
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
