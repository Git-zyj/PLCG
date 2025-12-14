#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 382384811U;
unsigned short var_5 = (unsigned short)18882;
unsigned short var_6 = (unsigned short)58983;
short var_7 = (short)-18574;
unsigned short var_8 = (unsigned short)53467;
unsigned short var_13 = (unsigned short)13250;
unsigned short var_14 = (unsigned short)56890;
unsigned char var_17 = (unsigned char)167;
int zero = 0;
unsigned short var_19 = (unsigned short)56237;
unsigned long long int var_20 = 15162454371612126465ULL;
unsigned char var_21 = (unsigned char)89;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
