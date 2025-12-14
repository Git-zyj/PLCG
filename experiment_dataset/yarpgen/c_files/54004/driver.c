#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 1364854613;
int var_2 = 1251405442;
unsigned int var_3 = 151576831U;
long long int var_4 = 8715635704751885224LL;
unsigned char var_5 = (unsigned char)129;
int var_6 = -902331650;
unsigned int var_7 = 31329314U;
unsigned char var_9 = (unsigned char)124;
unsigned int var_10 = 1720851789U;
int zero = 0;
unsigned char var_11 = (unsigned char)154;
unsigned int var_12 = 759300955U;
unsigned char var_13 = (unsigned char)171;
unsigned long long int var_14 = 6521766741881819098ULL;
unsigned int var_15 = 2420854377U;
unsigned long long int var_16 = 16745948952535555175ULL;
unsigned char var_17 = (unsigned char)230;
unsigned int var_18 = 1284339784U;
unsigned char var_19 = (unsigned char)119;
unsigned short var_20 = (unsigned short)46958;
short var_21 = (short)-2084;
signed char var_22 = (signed char)-115;
int var_23 = -530165728;
_Bool var_24 = (_Bool)0;
unsigned long long int var_25 = 10079815622537216215ULL;
long long int var_26 = -7372938479990333492LL;
unsigned char var_27 = (unsigned char)239;
long long int arr_4 [22] [22] ;
short arr_9 [22] [22] ;
unsigned char arr_13 [23] ;
unsigned long long int arr_20 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 4848368597049136091LL : 8393298197240830312LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (short)10835;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned char)215 : (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? 6294004208246396872ULL : 17805682000835660399ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
