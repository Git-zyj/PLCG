#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)253;
unsigned short var_7 = (unsigned short)50749;
unsigned long long int var_8 = 12537789284930383110ULL;
int var_10 = -1953014161;
unsigned char var_12 = (unsigned char)163;
unsigned char var_14 = (unsigned char)46;
int zero = 0;
unsigned short var_15 = (unsigned short)31306;
short var_16 = (short)-22596;
unsigned char var_17 = (unsigned char)125;
unsigned short var_18 = (unsigned short)56135;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
