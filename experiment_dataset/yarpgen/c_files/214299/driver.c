#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2490994773U;
short var_5 = (short)-22892;
unsigned long long int var_6 = 5457003313201695478ULL;
unsigned short var_7 = (unsigned short)5418;
unsigned char var_9 = (unsigned char)233;
unsigned long long int var_10 = 8288147645619371672ULL;
int var_12 = 1183100916;
int var_13 = 158517806;
unsigned int var_16 = 1615732202U;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 4074639838U;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)165;
void init() {
}

void checksum() {
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
