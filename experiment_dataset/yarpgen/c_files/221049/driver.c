#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -745126300673684867LL;
unsigned short var_1 = (unsigned short)53593;
int var_2 = 1422036834;
long long int var_3 = -7710758494218897184LL;
signed char var_4 = (signed char)14;
_Bool var_7 = (_Bool)0;
long long int var_8 = 7965792104925980731LL;
int var_9 = 1775754293;
int zero = 0;
unsigned short var_10 = (unsigned short)1184;
int var_11 = 1927565890;
unsigned short var_12 = (unsigned short)6191;
unsigned short var_13 = (unsigned short)23659;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
