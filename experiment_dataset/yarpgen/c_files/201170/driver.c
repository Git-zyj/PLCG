#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3824;
unsigned char var_3 = (unsigned char)212;
unsigned char var_5 = (unsigned char)178;
int var_6 = -425829153;
short var_9 = (short)-14664;
unsigned char var_10 = (unsigned char)60;
long long int var_11 = 3312587220935065893LL;
int zero = 0;
int var_13 = 1749417684;
short var_14 = (short)2502;
long long int var_15 = -6935778993278099240LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
