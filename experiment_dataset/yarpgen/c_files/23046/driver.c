#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1879811461;
short var_5 = (short)-1379;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)22000;
unsigned int var_10 = 4255411936U;
int var_12 = -1245119767;
int var_16 = 521767619;
unsigned char var_19 = (unsigned char)133;
int zero = 0;
unsigned long long int var_20 = 18152048516653919167ULL;
int var_21 = -1608451009;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 281385016U;
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
