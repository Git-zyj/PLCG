#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13086;
_Bool var_1 = (_Bool)1;
short var_3 = (short)-16564;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)4;
signed char var_7 = (signed char)14;
unsigned short var_8 = (unsigned short)53243;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned short var_11 = (unsigned short)3173;
long long int var_12 = 4288181399341282502LL;
int var_13 = -884258266;
signed char var_14 = (signed char)57;
unsigned char var_15 = (unsigned char)99;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
