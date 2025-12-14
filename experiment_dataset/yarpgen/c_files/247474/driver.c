#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)203;
long long int var_1 = -4220678430907046435LL;
int var_3 = 1521499161;
unsigned short var_6 = (unsigned short)39242;
unsigned short var_10 = (unsigned short)63265;
unsigned short var_11 = (unsigned short)33867;
unsigned short var_13 = (unsigned short)5644;
long long int var_14 = -7785101750963188948LL;
int zero = 0;
unsigned short var_15 = (unsigned short)28856;
_Bool var_16 = (_Bool)1;
long long int var_17 = -1786924413951984023LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
