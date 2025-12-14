#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)45166;
unsigned char var_3 = (unsigned char)72;
unsigned short var_4 = (unsigned short)30767;
unsigned short var_7 = (unsigned short)9033;
int var_10 = 2105498475;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)43;
unsigned int var_15 = 2137104357U;
long long int var_16 = -3583563521799522120LL;
unsigned long long int var_17 = 7983974240245731777ULL;
void init() {
}

void checksum() {
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
