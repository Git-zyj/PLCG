#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)29;
_Bool var_6 = (_Bool)1;
short var_11 = (short)-22309;
unsigned int var_14 = 787030406U;
unsigned long long int var_17 = 8053484017313417748ULL;
unsigned char var_18 = (unsigned char)182;
unsigned char var_19 = (unsigned char)175;
int zero = 0;
long long int var_20 = -8205588894850579962LL;
_Bool var_21 = (_Bool)1;
int var_22 = -450805007;
void init() {
}

void checksum() {
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
