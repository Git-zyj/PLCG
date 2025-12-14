#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)10;
unsigned char var_3 = (unsigned char)252;
unsigned char var_5 = (unsigned char)223;
unsigned char var_10 = (unsigned char)4;
long long int var_11 = -4907363398686332053LL;
short var_12 = (short)-17815;
unsigned int var_14 = 1498820103U;
unsigned char var_18 = (unsigned char)139;
int zero = 0;
unsigned long long int var_20 = 177892864071879853ULL;
short var_21 = (short)16409;
short var_22 = (short)3117;
unsigned short var_23 = (unsigned short)9640;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
