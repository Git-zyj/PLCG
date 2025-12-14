#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14211;
unsigned short var_11 = (unsigned short)51097;
unsigned int var_13 = 2134644475U;
int zero = 0;
unsigned char var_18 = (unsigned char)52;
unsigned long long int var_19 = 18309029658750427240ULL;
unsigned short var_20 = (unsigned short)42496;
void init() {
}

void checksum() {
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
