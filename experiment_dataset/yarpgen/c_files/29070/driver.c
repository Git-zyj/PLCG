#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)200;
long long int var_2 = 8013016334188671581LL;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)57511;
int var_7 = 968359261;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
long long int var_13 = -1800608588615649910LL;
unsigned char var_15 = (unsigned char)64;
unsigned int var_16 = 472533006U;
int zero = 0;
unsigned short var_17 = (unsigned short)48101;
unsigned char var_18 = (unsigned char)93;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 3483183305U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
