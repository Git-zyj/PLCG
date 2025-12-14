#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7680634628162164546LL;
long long int var_2 = -805192140332956049LL;
unsigned char var_3 = (unsigned char)218;
unsigned char var_6 = (unsigned char)151;
long long int var_7 = 2430630562384126392LL;
unsigned char var_9 = (unsigned char)252;
_Bool var_10 = (_Bool)1;
short var_12 = (short)-6107;
unsigned char var_13 = (unsigned char)42;
unsigned char var_14 = (unsigned char)175;
int zero = 0;
short var_17 = (short)-17566;
unsigned char var_18 = (unsigned char)186;
short var_19 = (short)32629;
void init() {
}

void checksum() {
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
