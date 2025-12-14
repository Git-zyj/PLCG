#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-48;
int var_1 = -435586797;
signed char var_2 = (signed char)35;
short var_3 = (short)28224;
signed char var_4 = (signed char)62;
unsigned char var_5 = (unsigned char)24;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)85;
signed char var_8 = (signed char)-104;
long long int var_9 = -649596984751690816LL;
unsigned int var_10 = 3649347875U;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)206;
unsigned int var_14 = 109098978U;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)10;
unsigned long long int var_17 = 12465350520612026883ULL;
unsigned int var_18 = 1043001835U;
unsigned char var_19 = (unsigned char)250;
int var_20 = 638145111;
unsigned int var_21 = 2365751566U;
long long int var_22 = -7151090045991684686LL;
unsigned long long int var_23 = 960000650993980541ULL;
unsigned int var_24 = 230615598U;
long long int var_25 = -6091600326571266764LL;
unsigned long long int var_26 = 1455243112069624903ULL;
unsigned long long int var_27 = 14626128918773029971ULL;
int var_28 = -1365218787;
unsigned int var_29 = 1506675388U;
long long int var_30 = 5979827773725972722LL;
signed char arr_6 [17] ;
short arr_10 [16] ;
long long int arr_13 [14] ;
int arr_17 [14] ;
unsigned char arr_28 [19] ;
unsigned long long int arr_32 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)39 : (signed char)27;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (short)-15543;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? -2856786925954152970LL : 4324608662416010029LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? -1921322567 : -1095574137;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? (unsigned char)188 : (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_32 [i_0] [i_1] = (i_0 % 2 == 0) ? 13735421668233302397ULL : 7496386442383333034ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_32 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
