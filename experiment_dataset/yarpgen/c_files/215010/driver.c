#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)126;
signed char var_4 = (signed char)112;
unsigned int var_6 = 4225711442U;
short var_8 = (short)20525;
unsigned char var_9 = (unsigned char)81;
signed char var_12 = (signed char)-123;
int var_13 = 778917048;
unsigned short var_15 = (unsigned short)930;
short var_16 = (short)8982;
int zero = 0;
short var_17 = (short)-12379;
unsigned char var_18 = (unsigned char)255;
unsigned char var_19 = (unsigned char)166;
long long int var_20 = 2717193067649857186LL;
void init() {
}

void checksum() {
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
