#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)250;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 778386378U;
unsigned char var_5 = (unsigned char)182;
short var_6 = (short)28624;
long long int var_7 = -8052997229771624880LL;
unsigned char var_8 = (unsigned char)5;
unsigned short var_9 = (unsigned short)47925;
signed char var_10 = (signed char)62;
int zero = 0;
unsigned short var_11 = (unsigned short)8483;
_Bool var_12 = (_Bool)1;
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
