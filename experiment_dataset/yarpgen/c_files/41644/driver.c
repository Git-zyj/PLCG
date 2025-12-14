#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26916;
unsigned char var_7 = (unsigned char)255;
unsigned short var_8 = (unsigned short)30101;
long long int var_10 = -8013856682665418486LL;
unsigned int var_11 = 98716682U;
unsigned short var_13 = (unsigned short)17908;
unsigned short var_17 = (unsigned short)36989;
int zero = 0;
unsigned short var_19 = (unsigned short)15195;
signed char var_20 = (signed char)-66;
short var_21 = (short)-30407;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
