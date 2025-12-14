#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 7340836497115110706ULL;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)251;
unsigned short var_4 = (unsigned short)49738;
unsigned short var_5 = (unsigned short)56702;
unsigned char var_6 = (unsigned char)180;
signed char var_7 = (signed char)101;
unsigned long long int var_8 = 583738245677201387ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)3;
unsigned char var_12 = (unsigned char)173;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
