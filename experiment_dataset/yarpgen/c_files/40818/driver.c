#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1378740469U;
unsigned short var_1 = (unsigned short)3612;
signed char var_2 = (signed char)-11;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)13451;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)125;
unsigned char var_7 = (unsigned char)179;
unsigned int var_8 = 2296774259U;
unsigned short var_9 = (unsigned short)50283;
short var_10 = (short)17652;
int zero = 0;
int var_11 = 990948968;
unsigned int var_12 = 343382271U;
int var_13 = 1290817598;
unsigned char var_14 = (unsigned char)48;
unsigned char var_15 = (unsigned char)5;
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
