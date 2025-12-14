#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3747622058U;
unsigned short var_2 = (unsigned short)1874;
short var_3 = (short)-27054;
_Bool var_4 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned short var_11 = (unsigned short)62526;
unsigned char var_16 = (unsigned char)198;
unsigned short var_17 = (unsigned short)39347;
int zero = 0;
unsigned short var_20 = (unsigned short)13791;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-23260;
unsigned short var_23 = (unsigned short)36195;
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
