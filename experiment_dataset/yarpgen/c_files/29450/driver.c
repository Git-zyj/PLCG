#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)172;
short var_5 = (short)3126;
int var_7 = -1726113405;
unsigned char var_9 = (unsigned char)237;
unsigned char var_15 = (unsigned char)5;
int zero = 0;
int var_16 = 1128052537;
int var_17 = 1864821966;
unsigned char var_18 = (unsigned char)210;
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
