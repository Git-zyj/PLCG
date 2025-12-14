#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)178;
unsigned int var_3 = 3583709601U;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)43;
_Bool var_6 = (_Bool)1;
int var_9 = 953867704;
unsigned long long int var_11 = 4419657642251281792ULL;
int zero = 0;
long long int var_12 = -881074405424247627LL;
int var_13 = 1993580255;
int var_14 = 1854314045;
unsigned short var_15 = (unsigned short)33293;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
