#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 18336906996569504919ULL;
int var_4 = 1341202270;
int var_6 = 580782094;
short var_8 = (short)17775;
unsigned char var_9 = (unsigned char)101;
unsigned short var_11 = (unsigned short)25224;
unsigned short var_12 = (unsigned short)16054;
int zero = 0;
unsigned long long int var_13 = 7172249376068644457ULL;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)30760;
long long int var_16 = 2686994669256810512LL;
unsigned long long int var_17 = 460731342789415392ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
