#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)18;
unsigned int var_1 = 1627995818U;
long long int var_3 = 178831880722258236LL;
signed char var_5 = (signed char)-113;
unsigned long long int var_9 = 2972338968048270116ULL;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)62553;
signed char var_12 = (signed char)-15;
signed char var_13 = (signed char)-127;
unsigned long long int var_14 = 3756424989267241606ULL;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 2992743180U;
long long int var_19 = -6298005719813140994LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
