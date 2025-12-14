#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10503;
long long int var_1 = 5982832587724427696LL;
int var_2 = -380175777;
short var_3 = (short)12160;
unsigned char var_4 = (unsigned char)202;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)54;
short var_7 = (short)20337;
unsigned long long int var_8 = 2561749009898645901ULL;
signed char var_10 = (signed char)-52;
signed char var_11 = (signed char)-40;
int zero = 0;
signed char var_12 = (signed char)73;
long long int var_13 = -1414296460905396471LL;
unsigned int var_14 = 2591146092U;
signed char var_15 = (signed char)19;
unsigned long long int var_16 = 4166838150642596580ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
