#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-5745;
unsigned short var_3 = (unsigned short)49221;
long long int var_4 = 7011260518102391493LL;
_Bool var_5 = (_Bool)1;
unsigned char var_11 = (unsigned char)30;
short var_12 = (short)5689;
signed char var_17 = (signed char)116;
unsigned int var_19 = 2119009476U;
int zero = 0;
long long int var_20 = -8268211201427603602LL;
long long int var_21 = 2123061451409052418LL;
unsigned short var_22 = (unsigned short)3195;
short var_23 = (short)-14896;
short var_24 = (short)1866;
long long int var_25 = -9197556721947603236LL;
long long int var_26 = 2213065838375214243LL;
short var_27 = (short)-26814;
unsigned char var_28 = (unsigned char)93;
unsigned short var_29 = (unsigned short)50524;
short var_30 = (short)4530;
long long int var_31 = -3076636565242332203LL;
unsigned char var_32 = (unsigned char)180;
short var_33 = (short)4716;
unsigned short var_34 = (unsigned short)64942;
_Bool var_35 = (_Bool)1;
unsigned short var_36 = (unsigned short)31654;
short var_37 = (short)27103;
short var_38 = (short)8167;
signed char var_39 = (signed char)-69;
short var_40 = (short)-3713;
unsigned long long int var_41 = 13063514492545380372ULL;
unsigned char var_42 = (unsigned char)113;
unsigned long long int var_43 = 14113156269371980448ULL;
unsigned int var_44 = 3147298368U;
int var_45 = -1599968909;
unsigned char var_46 = (unsigned char)216;
unsigned long long int arr_0 [23] ;
unsigned short arr_7 [23] [23] [23] ;
long long int arr_8 [23] [23] [23] [23] ;
unsigned short arr_15 [15] ;
long long int arr_17 [15] [15] [15] ;
unsigned short arr_20 [15] ;
unsigned long long int arr_22 [15] [15] [15] [15] [15] [15] [15] ;
unsigned short arr_27 [15] [15] [15] [15] [15] ;
long long int arr_34 [15] [15] [15] [15] [15] ;
long long int arr_10 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 16806650911829007768ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)64008 : (unsigned short)45465;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -5305497465591720421LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = (unsigned short)47115;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 1814080505122336172LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_20 [i_0] = (unsigned short)20083;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 16347332919983488135ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)54615;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] = 2777206485867715766LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 8348493606382837869LL : 4704554468458727363LL;
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
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
