#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4128796542U;
short var_2 = (short)17455;
unsigned char var_3 = (unsigned char)134;
_Bool var_4 = (_Bool)0;
long long int var_8 = -6335064979936413571LL;
unsigned short var_12 = (unsigned short)56506;
unsigned int var_13 = 2699757875U;
long long int var_15 = -6922190894577690331LL;
unsigned int var_16 = 3897263246U;
unsigned short var_17 = (unsigned short)21423;
int zero = 0;
unsigned char var_18 = (unsigned char)217;
long long int var_19 = 1604183166080943099LL;
void init() {
}

void checksum() {
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
