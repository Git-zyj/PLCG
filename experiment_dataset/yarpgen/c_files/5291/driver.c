#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5268293961542089664LL;
unsigned long long int var_2 = 17318187826432907004ULL;
unsigned short var_3 = (unsigned short)63222;
unsigned short var_4 = (unsigned short)9315;
unsigned int var_5 = 2987666741U;
unsigned char var_6 = (unsigned char)190;
unsigned int var_7 = 906248823U;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 3027949990U;
unsigned char var_10 = (unsigned char)222;
long long int var_11 = -474009318735537302LL;
unsigned char var_12 = (unsigned char)207;
long long int var_14 = 7630708563510044393LL;
unsigned char var_15 = (unsigned char)105;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_17 = -6869417746489447450LL;
short var_18 = (short)7133;
unsigned int var_19 = 416138877U;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-30287;
long long int var_22 = 4708208571637813734LL;
unsigned short var_23 = (unsigned short)56322;
unsigned short var_24 = (unsigned short)45514;
unsigned int var_25 = 38459298U;
unsigned short var_26 = (unsigned short)42534;
short var_27 = (short)-18780;
unsigned short var_28 = (unsigned short)27229;
unsigned char var_29 = (unsigned char)177;
unsigned short var_30 = (unsigned short)64834;
unsigned int var_31 = 563072617U;
unsigned int var_32 = 2958756191U;
unsigned short var_33 = (unsigned short)20618;
short var_34 = (short)-12039;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
