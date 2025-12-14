#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18269216569887612089ULL;
signed char var_1 = (signed char)-100;
unsigned long long int var_2 = 9310748209828883944ULL;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)99;
unsigned long long int var_5 = 11011991730079223987ULL;
unsigned char var_6 = (unsigned char)48;
short var_7 = (short)11355;
short var_8 = (short)27398;
_Bool var_9 = (_Bool)1;
short var_10 = (short)17108;
short var_11 = (short)-15183;
_Bool var_12 = (_Bool)0;
long long int var_13 = 6948688965468361830LL;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)156;
int zero = 0;
unsigned long long int var_16 = 18008777515583011028ULL;
unsigned int var_17 = 1004354608U;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)206;
signed char var_20 = (signed char)-25;
unsigned short var_21 = (unsigned short)41253;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)-30;
unsigned char var_25 = (unsigned char)0;
signed char var_26 = (signed char)85;
int var_27 = 1668794428;
unsigned char var_28 = (unsigned char)169;
unsigned short var_29 = (unsigned short)51202;
int var_30 = 1223915133;
short var_31 = (short)4953;
unsigned long long int var_32 = 7351124886892817588ULL;
_Bool var_33 = (_Bool)1;
unsigned char var_34 = (unsigned char)122;
signed char var_35 = (signed char)-126;
signed char var_36 = (signed char)118;
unsigned char var_37 = (unsigned char)83;
long long int var_38 = 6599154451148074915LL;
int var_39 = 1815298239;
unsigned long long int var_40 = 2606679235694329278ULL;
signed char var_41 = (signed char)99;
long long int var_42 = 7028141064430048574LL;
unsigned long long int var_43 = 8907312638976869577ULL;
int var_44 = -1485330829;
signed char var_45 = (signed char)-117;
int var_46 = 253908618;
signed char var_47 = (signed char)89;
unsigned long long int var_48 = 466857277853850586ULL;
unsigned int var_49 = 3337917015U;
unsigned char var_50 = (unsigned char)102;
unsigned long long int var_51 = 1488838104041066588ULL;
unsigned short var_52 = (unsigned short)13069;
unsigned char var_53 = (unsigned char)30;
unsigned char var_54 = (unsigned char)34;
unsigned short arr_0 [24] ;
unsigned char arr_1 [24] ;
unsigned char arr_3 [24] [24] ;
unsigned long long int arr_4 [24] [24] [24] ;
unsigned short arr_5 [24] [24] [24] ;
unsigned long long int arr_6 [24] [24] [24] ;
unsigned short arr_7 [24] [24] [24] ;
unsigned char arr_8 [24] [24] [24] ;
unsigned long long int arr_11 [24] [24] ;
_Bool arr_14 [24] [24] [24] [24] [24] ;
unsigned short arr_15 [24] [24] [24] [24] [24] [24] ;
unsigned char arr_16 [24] [24] [24] [24] [24] [24] ;
signed char arr_18 [24] [24] [24] [24] [24] [24] ;
signed char arr_21 [24] [24] [24] [24] [24] [24] [24] ;
int arr_32 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)50760;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)193;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 3892775181214329146ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)25320;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 2357281648173710255ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)6434;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = 16137367245089573324ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)61447;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)90;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 24; ++i_6) 
                                arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_32 [i_0] = -1293749690;
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
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
