#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55915;
unsigned char var_1 = (unsigned char)54;
unsigned long long int var_5 = 5835118809198780799ULL;
signed char var_6 = (signed char)27;
unsigned char var_7 = (unsigned char)184;
short var_8 = (short)-9239;
long long int var_10 = 4917759443522471998LL;
unsigned long long int var_11 = 7031695766954901161ULL;
int zero = 0;
short var_12 = (short)-3335;
int var_13 = -1764659921;
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
