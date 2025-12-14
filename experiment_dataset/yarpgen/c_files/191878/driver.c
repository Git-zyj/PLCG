#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 7300207583516934381LL;
unsigned int var_7 = 1723554387U;
unsigned char var_8 = (unsigned char)240;
short var_10 = (short)-25337;
unsigned char var_12 = (unsigned char)224;
signed char var_13 = (signed char)92;
unsigned int var_14 = 1980467503U;
unsigned short var_16 = (unsigned short)23528;
int zero = 0;
unsigned char var_17 = (unsigned char)157;
unsigned int var_18 = 282237821U;
signed char var_19 = (signed char)-33;
short var_20 = (short)5334;
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
