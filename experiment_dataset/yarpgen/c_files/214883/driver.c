#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -451179834;
signed char var_2 = (signed char)76;
int var_3 = -1311049578;
unsigned char var_6 = (unsigned char)30;
short var_8 = (short)-32113;
int var_13 = 1260825829;
unsigned short var_16 = (unsigned short)15957;
int zero = 0;
unsigned int var_17 = 1746344627U;
long long int var_18 = 2292424989757381760LL;
signed char var_19 = (signed char)8;
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
