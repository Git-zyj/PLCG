#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2146712225;
unsigned char var_5 = (unsigned char)125;
unsigned short var_8 = (unsigned short)11035;
unsigned char var_11 = (unsigned char)122;
unsigned short var_12 = (unsigned short)57126;
unsigned short var_16 = (unsigned short)43218;
int zero = 0;
unsigned char var_17 = (unsigned char)81;
long long int var_18 = -6291303212270197210LL;
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
