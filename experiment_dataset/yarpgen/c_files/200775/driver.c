#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3497164754854768420LL;
unsigned char var_1 = (unsigned char)78;
unsigned char var_2 = (unsigned char)26;
int var_3 = -1514361006;
unsigned long long int var_4 = 2960196262001341071ULL;
unsigned long long int var_5 = 10462127315081398535ULL;
unsigned char var_6 = (unsigned char)199;
long long int var_7 = -1044310759290303047LL;
short var_8 = (short)-30950;
unsigned long long int var_9 = 4584267339113808732ULL;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)159;
short var_12 = (short)7886;
short var_13 = (short)6701;
int zero = 0;
long long int var_14 = -2588456480896941306LL;
int var_15 = -422463408;
short var_16 = (short)-23268;
short var_17 = (short)3984;
unsigned char var_18 = (unsigned char)175;
unsigned char var_19 = (unsigned char)234;
unsigned long long int var_20 = 17829167843624306685ULL;
unsigned short var_21 = (unsigned short)17422;
short var_22 = (short)1954;
short var_23 = (short)-391;
short var_24 = (short)-23184;
long long int var_25 = 8946909027288363683LL;
_Bool var_26 = (_Bool)1;
unsigned long long int var_27 = 9315248984740341091ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
