#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1989599646;
int var_3 = -1796868006;
unsigned char var_4 = (unsigned char)126;
unsigned short var_5 = (unsigned short)4884;
signed char var_6 = (signed char)104;
int var_8 = 138350384;
short var_9 = (short)-8205;
signed char var_10 = (signed char)81;
unsigned long long int var_12 = 800067502952905794ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 1847550632U;
int var_20 = -1849194613;
int var_21 = -698458071;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
