#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_4 = 766891355U;
int var_5 = -530920784;
unsigned short var_7 = (unsigned short)45720;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-16999;
unsigned char var_10 = (unsigned char)146;
int var_12 = 1480101723;
int var_13 = -1361744002;
int zero = 0;
short var_16 = (short)-7647;
long long int var_17 = -2018355566183818783LL;
unsigned char var_18 = (unsigned char)228;
unsigned char var_19 = (unsigned char)145;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
