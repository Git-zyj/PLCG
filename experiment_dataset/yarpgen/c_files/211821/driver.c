#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 1137989956;
long long int var_3 = 8680622856494515821LL;
signed char var_4 = (signed char)125;
_Bool var_5 = (_Bool)0;
long long int var_6 = -6060185958284191017LL;
signed char var_7 = (signed char)4;
signed char var_8 = (signed char)103;
unsigned int var_9 = 2155832485U;
long long int var_14 = 8894883670854881573LL;
unsigned long long int var_18 = 13709439449974177746ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)38935;
signed char var_21 = (signed char)107;
unsigned int var_22 = 2591958098U;
signed char var_23 = (signed char)111;
unsigned char var_24 = (unsigned char)169;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
