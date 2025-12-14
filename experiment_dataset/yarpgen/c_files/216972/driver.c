#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 169872599U;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-12174;
int var_5 = -146660;
unsigned char var_6 = (unsigned char)124;
long long int var_7 = 4915798011692361107LL;
short var_8 = (short)27150;
unsigned int var_9 = 942220453U;
unsigned long long int var_10 = 7341877386466686703ULL;
int zero = 0;
long long int var_12 = 5602312093947588425LL;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)8192;
unsigned short var_15 = (unsigned short)9127;
long long int var_16 = -6232626663178018109LL;
short var_17 = (short)-17981;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-94;
int var_20 = 525408160;
signed char var_21 = (signed char)-103;
unsigned char var_22 = (unsigned char)152;
short var_23 = (short)17392;
short var_24 = (short)3337;
unsigned long long int var_25 = 8272827037626697948ULL;
unsigned long long int var_26 = 10158716742670451955ULL;
_Bool var_27 = (_Bool)0;
long long int var_28 = 5699438454979782722LL;
_Bool var_29 = (_Bool)1;
short var_30 = (short)8501;
signed char var_31 = (signed char)-96;
short var_32 = (short)24032;
short var_33 = (short)-15752;
unsigned char var_34 = (unsigned char)18;
unsigned int var_35 = 853657201U;
unsigned int var_36 = 2537538400U;
signed char var_37 = (signed char)105;
signed char arr_9 [10] [10] [10] [10] ;
long long int arr_35 [12] ;
int arr_43 [12] [12] ;
unsigned long long int arr_44 [12] [12] [12] ;
signed char arr_47 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-69 : (signed char)29;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_35 [i_0] = (i_0 % 2 == 0) ? -1011177454032917315LL : -2616699042891137993LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_43 [i_0] [i_1] = (i_0 % 2 == 0) ? 537425009 : 1141950042;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 5791831469797539953ULL : 12494500877986935827ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_47 [i_0] [i_1] = (signed char)-97;
}

void checksum() {
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_43 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_44 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_47 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
