#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5208444461158520201LL;
long long int var_1 = -5172110503044284709LL;
unsigned char var_2 = (unsigned char)2;
unsigned char var_3 = (unsigned char)195;
unsigned int var_4 = 524809698U;
long long int var_5 = -263697487738351104LL;
unsigned char var_6 = (unsigned char)69;
short var_7 = (short)-22509;
unsigned long long int var_9 = 15736312510024809219ULL;
signed char var_10 = (signed char)-123;
unsigned short var_11 = (unsigned short)64422;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-76;
unsigned short var_14 = (unsigned short)48;
short var_15 = (short)-25397;
unsigned int var_16 = 3120867679U;
unsigned char var_17 = (unsigned char)74;
unsigned int var_18 = 445393933U;
unsigned long long int var_19 = 5894519079501241134ULL;
unsigned char var_20 = (unsigned char)183;
unsigned char var_21 = (unsigned char)241;
unsigned short var_22 = (unsigned short)40037;
long long int var_23 = 6990036882875729470LL;
signed char var_24 = (signed char)-100;
unsigned int var_25 = 3448316127U;
_Bool var_26 = (_Bool)0;
short var_27 = (short)22747;
unsigned int var_28 = 426826344U;
unsigned long long int var_29 = 13482397575053991165ULL;
unsigned char var_30 = (unsigned char)65;
unsigned int var_31 = 993284215U;
short var_32 = (short)-2918;
unsigned long long int var_33 = 3189472660912278492ULL;
int var_34 = -1661335432;
unsigned char var_35 = (unsigned char)22;
signed char var_36 = (signed char)103;
_Bool var_37 = (_Bool)0;
short var_38 = (short)-16554;
unsigned int var_39 = 3157358146U;
unsigned int var_40 = 3624985982U;
short var_41 = (short)-32688;
int var_42 = 708042236;
short var_43 = (short)-26682;
long long int var_44 = -4830305022181255789LL;
unsigned long long int var_45 = 1511498069806140962ULL;
unsigned char var_46 = (unsigned char)35;
_Bool var_47 = (_Bool)0;
_Bool var_48 = (_Bool)1;
unsigned int arr_0 [13] ;
int arr_3 [13] ;
long long int arr_4 [13] [13] ;
int arr_6 [15] ;
short arr_8 [15] ;
long long int arr_11 [15] [15] [15] ;
signed char arr_12 [15] [15] [15] ;
_Bool arr_14 [15] [15] ;
unsigned char arr_15 [15] [15] [15] [15] [15] [15] ;
signed char arr_16 [15] [15] [15] [15] [15] ;
unsigned int arr_17 [15] [15] [15] [15] ;
int arr_19 [15] [15] [15] [15] [15] ;
_Bool arr_20 [15] [15] [15] [15] ;
short arr_21 [15] [15] [15] [15] [15] ;
short arr_26 [23] ;
short arr_27 [23] ;
long long int arr_28 [23] ;
signed char arr_29 [16] ;
_Bool arr_30 [16] ;
short arr_32 [16] [16] [16] ;
signed char arr_35 [16] ;
_Bool arr_38 [16] [16] [16] [16] ;
signed char arr_39 [16] [16] [16] ;
long long int arr_2 [13] ;
unsigned short arr_5 [13] [13] ;
unsigned char arr_37 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 3298130739U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = -848555675;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 8621505764405516401LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 1890494513;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (short)6637;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 4229552607055001973LL : 6111535867236109412LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-50 : (signed char)-86;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (unsigned char)119 : (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (signed char)-18 : (signed char)-79;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 66171628U : 1950352015U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = 1900126656;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (short)-11864 : (short)19503;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_26 [i_0] = (short)-13740;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_27 [i_0] = (short)1971;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_28 [i_0] = 3443454299742560159LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? (signed char)-45 : (signed char)123;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_30 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)86 : (short)-18202;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_35 [i_0] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (signed char)127;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = -1263162041197972309LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)33667;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_37 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)167 : (unsigned char)104;
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
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_37 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
