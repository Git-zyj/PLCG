#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2293774079U;
unsigned char var_1 = (unsigned char)35;
unsigned char var_2 = (unsigned char)18;
short var_3 = (short)-24189;
unsigned char var_4 = (unsigned char)206;
unsigned long long int var_5 = 8003857211648924473ULL;
unsigned char var_6 = (unsigned char)116;
int var_7 = -278314224;
unsigned short var_8 = (unsigned short)19124;
short var_9 = (short)-20932;
int zero = 0;
int var_10 = -321399506;
long long int var_11 = -9158796032024869868LL;
signed char var_12 = (signed char)71;
long long int var_13 = 2358998270359486622LL;
unsigned int var_14 = 514914372U;
unsigned long long int var_15 = 9763004717672762849ULL;
unsigned int var_16 = 1454400785U;
_Bool var_17 = (_Bool)1;
long long int var_18 = 8952245685922869622LL;
unsigned char var_19 = (unsigned char)250;
long long int var_20 = 4627093790241317164LL;
unsigned int var_21 = 3279310781U;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 2513943519U;
signed char var_24 = (signed char)9;
int var_25 = -2100406110;
unsigned long long int var_26 = 2129160316982743217ULL;
_Bool var_27 = (_Bool)1;
unsigned int var_28 = 737282329U;
_Bool var_29 = (_Bool)1;
short var_30 = (short)26715;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
