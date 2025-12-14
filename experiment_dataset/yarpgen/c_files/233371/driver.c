#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)156;
unsigned int var_4 = 3534029738U;
unsigned char var_5 = (unsigned char)38;
signed char var_6 = (signed char)-63;
unsigned short var_7 = (unsigned short)11137;
unsigned char var_9 = (unsigned char)243;
unsigned int var_15 = 760080938U;
unsigned char var_16 = (unsigned char)170;
int zero = 0;
int var_17 = 1465676598;
unsigned char var_18 = (unsigned char)163;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
