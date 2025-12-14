#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8583;
int var_1 = -1986716767;
long long int var_2 = -1799915728559621898LL;
unsigned int var_3 = 5071116U;
unsigned long long int var_4 = 16815169371560953973ULL;
unsigned int var_5 = 3475338392U;
_Bool var_7 = (_Bool)0;
unsigned int var_10 = 547852107U;
unsigned long long int var_13 = 16726369471299352675ULL;
unsigned short var_14 = (unsigned short)53969;
long long int var_16 = 8517828048492791343LL;
unsigned char var_18 = (unsigned char)39;
int zero = 0;
unsigned short var_20 = (unsigned short)56871;
unsigned char var_21 = (unsigned char)172;
unsigned long long int var_22 = 17774964781950765336ULL;
unsigned long long int var_23 = 2011794371046061654ULL;
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
