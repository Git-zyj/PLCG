#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3504;
unsigned short var_1 = (unsigned short)14916;
unsigned char var_4 = (unsigned char)170;
unsigned long long int var_11 = 13308992395121703542ULL;
unsigned short var_13 = (unsigned short)59608;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_16 = (short)-5129;
unsigned short var_17 = (unsigned short)41841;
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
