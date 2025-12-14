#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)91;
long long int var_5 = -6319782259820051325LL;
unsigned short var_6 = (unsigned short)33508;
int var_14 = -1648538040;
long long int var_18 = 2814226616246737799LL;
int zero = 0;
unsigned int var_20 = 2489575454U;
unsigned short var_21 = (unsigned short)10772;
unsigned char var_22 = (unsigned char)212;
signed char var_23 = (signed char)14;
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
