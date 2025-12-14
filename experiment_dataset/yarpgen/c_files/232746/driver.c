#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12222342182415951141ULL;
unsigned short var_4 = (unsigned short)5362;
unsigned long long int var_8 = 10573427171664053391ULL;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 6463637031286975613ULL;
unsigned short var_13 = (unsigned short)35220;
long long int var_14 = 1364689630012488432LL;
int zero = 0;
unsigned int var_15 = 776565079U;
unsigned char var_16 = (unsigned char)104;
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
