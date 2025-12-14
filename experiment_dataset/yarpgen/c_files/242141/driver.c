#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7179568013957945582ULL;
unsigned char var_3 = (unsigned char)75;
unsigned char var_5 = (unsigned char)109;
unsigned char var_6 = (unsigned char)33;
short var_7 = (short)-26121;
unsigned char var_8 = (unsigned char)224;
long long int var_10 = 790253216185641287LL;
int zero = 0;
unsigned char var_13 = (unsigned char)195;
unsigned char var_14 = (unsigned char)81;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
