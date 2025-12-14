#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)8760;
unsigned int var_3 = 2675369370U;
unsigned short var_4 = (unsigned short)41903;
unsigned long long int var_6 = 6874614347347505086ULL;
unsigned int var_9 = 3684956709U;
long long int var_10 = 1736651277246403438LL;
unsigned short var_12 = (unsigned short)63079;
unsigned short var_14 = (unsigned short)21406;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 17349266704161283210ULL;
unsigned short var_17 = (unsigned short)8394;
void init() {
}

void checksum() {
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
