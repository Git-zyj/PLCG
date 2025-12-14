#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43766;
unsigned char var_2 = (unsigned char)150;
short var_5 = (short)-18016;
int var_16 = 592357333;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_20 = -8627916107037632751LL;
short var_21 = (short)12570;
unsigned short var_22 = (unsigned short)46612;
signed char var_23 = (signed char)32;
int var_24 = 590341239;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
