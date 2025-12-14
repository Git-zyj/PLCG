#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)61;
unsigned char var_2 = (unsigned char)47;
unsigned short var_3 = (unsigned short)38376;
int var_6 = -1861385459;
unsigned int var_7 = 3455445489U;
signed char var_9 = (signed char)-16;
signed char var_10 = (signed char)-89;
unsigned char var_11 = (unsigned char)120;
unsigned short var_14 = (unsigned short)48237;
unsigned short var_15 = (unsigned short)47555;
int zero = 0;
unsigned short var_16 = (unsigned short)788;
unsigned char var_17 = (unsigned char)43;
unsigned char var_18 = (unsigned char)131;
short var_19 = (short)31293;
unsigned char var_20 = (unsigned char)87;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
