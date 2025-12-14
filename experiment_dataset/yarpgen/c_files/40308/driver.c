#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2971343230792177274LL;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 14364301825509428152ULL;
unsigned short var_3 = (unsigned short)4247;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)30203;
unsigned char var_6 = (unsigned char)222;
unsigned char var_7 = (unsigned char)55;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-47;
_Bool var_12 = (_Bool)0;
long long int var_13 = 148719634953406764LL;
long long int var_14 = 4039890474178696492LL;
int zero = 0;
unsigned int var_15 = 4260133674U;
_Bool var_16 = (_Bool)0;
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
