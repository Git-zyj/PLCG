#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4774266786291671900LL;
signed char var_3 = (signed char)63;
long long int var_5 = -8949620321159310584LL;
long long int var_6 = 2440891290945558845LL;
unsigned char var_7 = (unsigned char)128;
short var_10 = (short)-29763;
long long int var_11 = 8277331098766928871LL;
unsigned short var_13 = (unsigned short)23918;
unsigned short var_14 = (unsigned short)12023;
int zero = 0;
short var_16 = (short)7522;
unsigned short var_17 = (unsigned short)53865;
unsigned char var_18 = (unsigned char)61;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
