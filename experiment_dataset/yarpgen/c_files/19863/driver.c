#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1631341956U;
unsigned short var_5 = (unsigned short)16112;
long long int var_10 = -3377609574153629165LL;
unsigned int var_14 = 547397956U;
short var_17 = (short)-998;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)58;
unsigned char var_20 = (unsigned char)218;
signed char var_21 = (signed char)-28;
unsigned char var_22 = (unsigned char)48;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
