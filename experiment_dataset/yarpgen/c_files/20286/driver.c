#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)154;
int var_1 = -603572872;
unsigned short var_2 = (unsigned short)17783;
unsigned short var_3 = (unsigned short)61822;
int var_4 = -1232422718;
unsigned long long int var_5 = 14736736298314009292ULL;
unsigned short var_6 = (unsigned short)50396;
unsigned long long int var_8 = 13396807729619243298ULL;
unsigned long long int var_9 = 17051949441042309407ULL;
unsigned long long int var_10 = 17792201676504495279ULL;
long long int var_11 = 6061863572391125975LL;
long long int var_12 = -2997001426327640410LL;
_Bool var_13 = (_Bool)1;
long long int var_15 = 3689827192595296720LL;
unsigned int var_16 = 3832532808U;
_Bool var_17 = (_Bool)0;
long long int var_18 = -2761839138111879968LL;
unsigned int var_19 = 4031776711U;
int zero = 0;
long long int var_20 = -7364819155895107103LL;
signed char var_21 = (signed char)100;
long long int var_22 = -6278661166942834123LL;
unsigned short var_23 = (unsigned short)10734;
unsigned long long int var_24 = 12964055666081951951ULL;
long long int var_25 = -960038393378563020LL;
long long int var_26 = 2795570158969160129LL;
unsigned long long int var_27 = 699925015580349593ULL;
unsigned int var_28 = 4123501295U;
_Bool var_29 = (_Bool)0;
unsigned long long int var_30 = 1164907645452322400ULL;
long long int var_31 = 5960784570921217672LL;
unsigned char var_32 = (unsigned char)173;
unsigned int var_33 = 1354019255U;
unsigned long long int var_34 = 1451574547463176223ULL;
_Bool var_35 = (_Bool)0;
_Bool var_36 = (_Bool)0;
int var_37 = 459843226;
unsigned long long int var_38 = 18055555258773359084ULL;
unsigned short var_39 = (unsigned short)34035;
unsigned short var_40 = (unsigned short)38160;
signed char arr_0 [13] [13] ;
long long int arr_4 [13] ;
unsigned short arr_5 [13] [13] [13] [13] ;
unsigned short arr_6 [13] [13] ;
int arr_10 [20] ;
long long int arr_11 [20] ;
unsigned long long int arr_13 [20] [20] ;
int arr_15 [20] [20] [20] ;
unsigned char arr_16 [20] [20] [20] ;
unsigned long long int arr_18 [20] [20] [20] [20] ;
int arr_19 [16] ;
long long int arr_25 [16] ;
unsigned char arr_26 [16] [16] ;
long long int arr_30 [16] ;
unsigned long long int arr_31 [16] ;
long long int arr_32 [16] [16] [16] ;
unsigned short arr_41 [22] ;
unsigned short arr_47 [22] [22] [22] ;
long long int arr_49 [22] [22] ;
signed char arr_50 [22] [22] [22] [22] ;
long long int arr_66 [15] [15] [15] ;
signed char arr_9 [13] [13] [13] [13] ;
unsigned long long int arr_12 [20] [20] ;
unsigned int arr_21 [16] ;
unsigned long long int arr_24 [16] [16] [16] ;
unsigned long long int arr_36 [16] ;
_Bool arr_37 [16] [16] [16] [16] ;
unsigned char arr_46 [22] [22] [22] [22] ;
signed char arr_63 [11] [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-8 : (signed char)64;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -7840352956079146219LL : -1598530272204269592LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)25557 : (unsigned short)44146;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)28948 : (unsigned short)36473;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = 172232788;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -4975255905135145823LL : 774058863388495415LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_13 [i_0] [i_1] = 11607259694183240129ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = -2078062836;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 949128258140116797ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_19 [i_0] = 437865265;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_25 [i_0] = 2472246455282120155LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_26 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)248 : (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_30 [i_0] = 976424343739940857LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? 8538935160678441200ULL : 9475132736203325101ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 269722903054784066LL : 6423197767226438167LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_41 [i_0] = (unsigned short)45492;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = (unsigned short)42362;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_49 [i_0] [i_1] = -2192586946686839580LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_50 [i_0] [i_1] [i_2] [i_3] = (signed char)-81;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_66 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1623516763208552236LL : -8768270470621980435LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)6 : (signed char)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? 7184863823775455800ULL : 7845065497104101383ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_21 [i_0] = 3505202173U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = 13544604774208481894ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_36 [i_0] = (i_0 % 2 == 0) ? 16439236461890904897ULL : 14285887046846241694ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_46 [i_0] [i_1] [i_2] [i_3] = (unsigned char)28;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_63 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (signed char)49 : (signed char)26;
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
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_37 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_46 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_63 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
