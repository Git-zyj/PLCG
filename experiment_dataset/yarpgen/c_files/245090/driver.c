#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7648689680956046210LL;
short var_1 = (short)15563;
unsigned short var_3 = (unsigned short)12778;
long long int var_10 = 4673365335300357656LL;
int zero = 0;
unsigned short var_11 = (unsigned short)47978;
unsigned char var_12 = (unsigned char)162;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
