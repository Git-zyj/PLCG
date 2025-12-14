#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)19247;
unsigned short var_4 = (unsigned short)32447;
signed char var_5 = (signed char)35;
unsigned int var_6 = 3767856946U;
unsigned short var_7 = (unsigned short)1936;
unsigned int var_9 = 130123456U;
short var_13 = (short)12600;
unsigned int var_14 = 2870276676U;
int var_16 = 1430738662;
unsigned short var_18 = (unsigned short)22324;
int zero = 0;
unsigned char var_20 = (unsigned char)168;
long long int var_21 = -7399774726929531818LL;
unsigned short var_22 = (unsigned short)23332;
_Bool var_23 = (_Bool)0;
int var_24 = -984211076;
unsigned long long int var_25 = 1543857849183117142ULL;
unsigned int var_26 = 2421213127U;
unsigned char var_27 = (unsigned char)161;
unsigned short var_28 = (unsigned short)22598;
unsigned short var_29 = (unsigned short)19764;
short var_30 = (short)7448;
unsigned short var_31 = (unsigned short)7008;
long long int var_32 = 5442320540016345444LL;
unsigned int var_33 = 3807970907U;
unsigned int var_34 = 881697746U;
unsigned short var_35 = (unsigned short)1570;
unsigned short var_36 = (unsigned short)49666;
unsigned int var_37 = 386025867U;
unsigned int arr_0 [16] ;
unsigned int arr_2 [16] ;
unsigned char arr_3 [16] ;
int arr_7 [16] [16] ;
unsigned int arr_11 [16] [16] ;
unsigned long long int arr_14 [16] [16] ;
long long int arr_15 [16] ;
unsigned int arr_19 [16] [16] [16] [16] [16] ;
unsigned short arr_22 [25] ;
unsigned long long int arr_23 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 754887977U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 2397025475U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = 1969745450;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = 1362567498U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_14 [i_0] [i_1] = 15881665077679394694ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_15 [i_0] = -8807101947452278448LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = 1876667543U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_22 [i_0] = (unsigned short)37744;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_23 [i_0] = 6962039989047817367ULL;
}

void checksum() {
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
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
