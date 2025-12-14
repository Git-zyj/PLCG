#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16324729661984748478ULL;
short var_4 = (short)-27872;
unsigned long long int var_5 = 6408604812460033020ULL;
unsigned int var_7 = 1232999224U;
unsigned long long int var_10 = 16028718383327093651ULL;
_Bool var_11 = (_Bool)1;
unsigned int var_13 = 1724581625U;
unsigned int var_14 = 1566458902U;
_Bool var_15 = (_Bool)1;
long long int var_17 = -6254291836743440085LL;
int zero = 0;
unsigned char var_18 = (unsigned char)112;
unsigned short var_19 = (unsigned short)57772;
unsigned short var_20 = (unsigned short)62642;
long long int var_21 = 6757266324672325433LL;
unsigned char var_22 = (unsigned char)165;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
