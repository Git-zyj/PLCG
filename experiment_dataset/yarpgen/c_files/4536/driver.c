#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)3178;
signed char var_11 = (signed char)-16;
unsigned long long int var_12 = 8911793509559977373ULL;
short var_13 = (short)-17149;
unsigned short var_15 = (unsigned short)35523;
int zero = 0;
unsigned int var_18 = 1397470697U;
signed char var_19 = (signed char)-93;
short var_20 = (short)-10394;
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
