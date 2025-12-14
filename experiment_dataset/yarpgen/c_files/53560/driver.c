#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)27;
unsigned int var_2 = 1285543134U;
long long int var_4 = -6443631684606522254LL;
signed char var_5 = (signed char)-13;
short var_6 = (short)-16607;
unsigned int var_7 = 3790917232U;
unsigned char var_9 = (unsigned char)98;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 18182403243570921622ULL;
_Bool var_12 = (_Bool)0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)74;
int zero = 0;
unsigned short var_17 = (unsigned short)53221;
unsigned long long int var_18 = 5821276679128961480ULL;
int var_19 = -1169354972;
signed char var_20 = (signed char)-111;
unsigned char var_21 = (unsigned char)202;
signed char var_22 = (signed char)12;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
