#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52834;
unsigned short var_1 = (unsigned short)47007;
unsigned int var_2 = 2758237243U;
unsigned short var_4 = (unsigned short)18544;
signed char var_5 = (signed char)-83;
int var_7 = 1488936665;
unsigned int var_8 = 1931472997U;
signed char var_9 = (signed char)9;
unsigned long long int var_10 = 12091680317292360751ULL;
unsigned long long int var_12 = 12543624735989029651ULL;
int zero = 0;
int var_14 = 1786454259;
unsigned long long int var_15 = 1090246963290749799ULL;
unsigned short var_16 = (unsigned short)47564;
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
