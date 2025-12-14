#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1501065290;
unsigned short var_1 = (unsigned short)1811;
int var_2 = -2024950946;
long long int var_3 = -8836939463511206055LL;
long long int var_4 = 7298219034076793176LL;
int var_7 = 1019466081;
unsigned short var_8 = (unsigned short)27194;
unsigned short var_13 = (unsigned short)63143;
int zero = 0;
unsigned short var_15 = (unsigned short)7696;
signed char var_16 = (signed char)54;
int var_17 = -745646040;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
