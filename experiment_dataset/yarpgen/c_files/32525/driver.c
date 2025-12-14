#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21121;
short var_4 = (short)25773;
signed char var_7 = (signed char)-16;
signed char var_9 = (signed char)99;
signed char var_12 = (signed char)-98;
short var_13 = (short)-22776;
int var_16 = 2083227152;
unsigned short var_17 = (unsigned short)4374;
int zero = 0;
short var_18 = (short)32399;
int var_19 = 1165159945;
signed char var_20 = (signed char)-61;
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
