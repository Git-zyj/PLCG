#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5659828254674856067LL;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 2741530171U;
short var_5 = (short)10053;
_Bool var_6 = (_Bool)0;
int var_7 = 1045579761;
long long int var_10 = -4897011980777516722LL;
unsigned char var_12 = (unsigned char)197;
int zero = 0;
int var_19 = -687184434;
signed char var_20 = (signed char)-27;
unsigned short var_21 = (unsigned short)52173;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
