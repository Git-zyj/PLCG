#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5822576654400904092LL;
unsigned char var_1 = (unsigned char)50;
unsigned short var_2 = (unsigned short)8083;
long long int var_5 = 5035733208965406LL;
unsigned short var_6 = (unsigned short)62642;
signed char var_7 = (signed char)75;
unsigned char var_8 = (unsigned char)80;
short var_9 = (short)4357;
int zero = 0;
unsigned char var_13 = (unsigned char)60;
unsigned char var_14 = (unsigned char)66;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
