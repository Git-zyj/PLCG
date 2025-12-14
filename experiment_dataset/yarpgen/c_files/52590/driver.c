#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3857692324U;
unsigned short var_4 = (unsigned short)43568;
unsigned char var_6 = (unsigned char)96;
short var_7 = (short)22624;
long long int var_8 = 883948849408226677LL;
unsigned char var_10 = (unsigned char)142;
unsigned long long int var_11 = 8962837053881881967ULL;
unsigned int var_12 = 2829066112U;
unsigned short var_14 = (unsigned short)14959;
unsigned short var_19 = (unsigned short)45596;
int zero = 0;
unsigned short var_20 = (unsigned short)46366;
signed char var_21 = (signed char)-72;
void init() {
}

void checksum() {
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
