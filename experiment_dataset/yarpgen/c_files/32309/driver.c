#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11252735031578048651ULL;
signed char var_2 = (signed char)93;
short var_3 = (short)5981;
unsigned short var_5 = (unsigned short)16503;
signed char var_7 = (signed char)-1;
signed char var_8 = (signed char)-12;
unsigned char var_10 = (unsigned char)215;
int var_13 = 585174664;
int zero = 0;
unsigned long long int var_15 = 10095261094228460044ULL;
long long int var_16 = 1809436611678681095LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
