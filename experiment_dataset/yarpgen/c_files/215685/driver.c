#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)13;
int var_3 = 955718795;
_Bool var_5 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned short var_12 = (unsigned short)28945;
_Bool var_17 = (_Bool)0;
int zero = 0;
int var_20 = 1809052413;
signed char var_21 = (signed char)-52;
unsigned short var_22 = (unsigned short)19782;
long long int var_23 = 1009629940090971263LL;
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
