#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -944289100;
unsigned char var_2 = (unsigned char)13;
long long int var_3 = -2194505871355694348LL;
_Bool var_5 = (_Bool)0;
short var_6 = (short)16718;
unsigned int var_8 = 323411106U;
int var_9 = 111963278;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-118;
short var_12 = (short)10287;
int zero = 0;
short var_13 = (short)17646;
long long int var_14 = -1404518991065872389LL;
short var_15 = (short)15448;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
