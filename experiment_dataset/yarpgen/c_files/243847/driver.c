#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13749527190925436646ULL;
unsigned char var_2 = (unsigned char)16;
long long int var_3 = -7706124598765923032LL;
short var_4 = (short)18460;
long long int var_7 = 5754349641427700353LL;
short var_9 = (short)1744;
unsigned char var_11 = (unsigned char)167;
signed char var_14 = (signed char)5;
long long int var_15 = 407215740024575358LL;
int zero = 0;
signed char var_16 = (signed char)-45;
unsigned long long int var_17 = 18379172950849908592ULL;
void init() {
}

void checksum() {
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
