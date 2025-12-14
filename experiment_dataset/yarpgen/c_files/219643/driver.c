#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)219;
short var_2 = (short)24327;
long long int var_3 = 2965709310418595214LL;
unsigned short var_4 = (unsigned short)29178;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
int var_7 = 231312227;
_Bool var_8 = (_Bool)0;
int var_9 = 323341528;
unsigned short var_10 = (unsigned short)43932;
short var_12 = (short)9260;
unsigned short var_13 = (unsigned short)53650;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = -3251341843215096750LL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
