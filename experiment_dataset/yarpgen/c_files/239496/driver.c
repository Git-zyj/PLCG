#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53126;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)125;
long long int var_4 = 7045760082415378508LL;
unsigned int var_5 = 3984971840U;
int var_6 = 1303650367;
unsigned char var_7 = (unsigned char)76;
unsigned long long int var_8 = 11097430282121363237ULL;
int zero = 0;
unsigned long long int var_10 = 12137463084768813828ULL;
long long int var_11 = -4450697935183015579LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
