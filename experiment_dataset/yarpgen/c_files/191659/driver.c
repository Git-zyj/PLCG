#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8660764029618745272LL;
signed char var_2 = (signed char)-92;
unsigned int var_3 = 4022726446U;
unsigned short var_4 = (unsigned short)1065;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned char var_10 = (unsigned char)119;
int zero = 0;
int var_11 = 1340552295;
unsigned short var_12 = (unsigned short)30423;
void init() {
}

void checksum() {
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
