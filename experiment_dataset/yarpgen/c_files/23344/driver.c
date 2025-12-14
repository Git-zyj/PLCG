#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -533847146;
short var_2 = (short)3627;
long long int var_3 = 913236882817534777LL;
short var_4 = (short)-5316;
unsigned char var_5 = (unsigned char)3;
unsigned long long int var_7 = 14889090439971554540ULL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 17574367800466710373ULL;
long long int var_11 = 186914476264425513LL;
short var_12 = (short)1117;
unsigned char var_13 = (unsigned char)227;
unsigned char var_14 = (unsigned char)182;
int zero = 0;
long long int var_15 = -7425504174768290060LL;
unsigned long long int var_16 = 6987471440555644712ULL;
unsigned int var_17 = 2527833624U;
unsigned long long int var_18 = 17841814131968673484ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
