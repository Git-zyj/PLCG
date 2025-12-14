#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6441252463106508632LL;
long long int var_1 = -5716886110874285252LL;
unsigned short var_3 = (unsigned short)24691;
unsigned char var_4 = (unsigned char)171;
int zero = 0;
long long int var_10 = 4210087628956379643LL;
unsigned short var_11 = (unsigned short)42767;
long long int var_12 = 8277131276237611611LL;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)30298;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
