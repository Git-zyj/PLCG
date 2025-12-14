#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)186;
_Bool var_4 = (_Bool)0;
long long int var_5 = -6602350463820000020LL;
unsigned short var_6 = (unsigned short)61800;
int var_7 = 1661747228;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)58652;
int var_10 = -847602417;
unsigned short var_11 = (unsigned short)10583;
int zero = 0;
unsigned char var_12 = (unsigned char)97;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1128781117U;
void init() {
}

void checksum() {
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
