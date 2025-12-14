#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 909030213;
short var_11 = (short)-17588;
signed char var_12 = (signed char)-84;
signed char var_14 = (signed char)81;
unsigned short var_15 = (unsigned short)49;
int zero = 0;
int var_16 = 60573759;
unsigned char var_17 = (unsigned char)146;
signed char var_18 = (signed char)-78;
unsigned long long int var_19 = 299974248832153475ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
