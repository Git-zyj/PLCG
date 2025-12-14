#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)7;
unsigned long long int var_2 = 10299809969541788287ULL;
unsigned short var_3 = (unsigned short)58738;
unsigned int var_6 = 445982400U;
unsigned char var_8 = (unsigned char)131;
short var_10 = (short)-16727;
int var_12 = -631953356;
int var_13 = 1969005455;
short var_15 = (short)-26253;
int zero = 0;
unsigned long long int var_17 = 3047963542628915837ULL;
long long int var_18 = 1577180699665870998LL;
unsigned char var_19 = (unsigned char)80;
void init() {
}

void checksum() {
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
