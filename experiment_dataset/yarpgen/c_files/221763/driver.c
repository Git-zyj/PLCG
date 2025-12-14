#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9154687318704612761LL;
unsigned long long int var_1 = 7147546434361208039ULL;
signed char var_2 = (signed char)45;
int var_3 = -2000292615;
int var_5 = 1751453625;
unsigned int var_6 = 1232315204U;
unsigned char var_8 = (unsigned char)56;
unsigned short var_9 = (unsigned short)58654;
signed char var_10 = (signed char)26;
unsigned char var_12 = (unsigned char)81;
unsigned int var_13 = 579895939U;
unsigned char var_16 = (unsigned char)91;
int zero = 0;
unsigned char var_18 = (unsigned char)108;
signed char var_19 = (signed char)-40;
void init() {
}

void checksum() {
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
