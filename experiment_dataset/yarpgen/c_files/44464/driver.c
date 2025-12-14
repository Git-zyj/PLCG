#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)91;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 11375753232694297942ULL;
unsigned short var_6 = (unsigned short)63270;
unsigned long long int var_7 = 13584768450772529276ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)248;
long long int var_11 = -4320750919675418619LL;
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
