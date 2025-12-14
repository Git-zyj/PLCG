#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1960841990309387158LL;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 9654666123263673ULL;
short var_3 = (short)12808;
int var_4 = 1890558216;
short var_5 = (short)-1089;
int var_7 = -2018151602;
unsigned short var_9 = (unsigned short)15959;
unsigned long long int var_10 = 17977700400361272065ULL;
int var_12 = -1923919953;
int var_14 = 969646539;
int zero = 0;
unsigned int var_15 = 551500278U;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)2;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
