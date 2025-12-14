#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4787839994417776296LL;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)4;
short var_4 = (short)-12198;
unsigned char var_5 = (unsigned char)251;
unsigned int var_6 = 3216364384U;
long long int var_7 = -5027413028907464864LL;
unsigned char var_8 = (unsigned char)54;
unsigned int var_10 = 2407396579U;
int zero = 0;
short var_11 = (short)-18176;
int var_12 = -30252269;
short var_13 = (short)-26888;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
