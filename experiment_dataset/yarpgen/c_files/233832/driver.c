#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35905;
unsigned short var_2 = (unsigned short)37472;
unsigned char var_3 = (unsigned char)53;
unsigned int var_5 = 1912077395U;
unsigned int var_8 = 946611404U;
int var_13 = 382629248;
unsigned short var_17 = (unsigned short)24802;
int zero = 0;
unsigned int var_18 = 461270288U;
unsigned long long int var_19 = 11366843452508013990ULL;
unsigned short var_20 = (unsigned short)14068;
_Bool var_21 = (_Bool)0;
long long int var_22 = -2063882875332572971LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
