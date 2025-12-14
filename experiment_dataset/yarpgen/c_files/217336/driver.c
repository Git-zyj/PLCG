#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)139;
unsigned long long int var_6 = 10110546432127499163ULL;
unsigned char var_10 = (unsigned char)140;
unsigned long long int var_12 = 15428879108967086932ULL;
unsigned short var_13 = (unsigned short)58868;
long long int var_14 = 4998789617434501376LL;
unsigned int var_16 = 3274126205U;
int zero = 0;
unsigned long long int var_18 = 8404777455535161555ULL;
long long int var_19 = 8793762122593511257LL;
signed char var_20 = (signed char)122;
int var_21 = 140788364;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
