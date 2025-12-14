#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48676;
signed char var_2 = (signed char)97;
long long int var_3 = 4987692126571279547LL;
long long int var_4 = 2037708317169701199LL;
unsigned int var_5 = 3322689411U;
int var_6 = 114517630;
unsigned long long int var_7 = 13542624089701351147ULL;
unsigned short var_8 = (unsigned short)6098;
unsigned short var_9 = (unsigned short)6751;
_Bool var_10 = (_Bool)0;
long long int var_11 = -7621058737297692786LL;
signed char var_12 = (signed char)-54;
signed char var_13 = (signed char)-86;
int zero = 0;
short var_14 = (short)-27427;
unsigned long long int var_15 = 6110605112211183585ULL;
long long int var_16 = 2748271555729813326LL;
unsigned short var_17 = (unsigned short)34545;
unsigned long long int var_18 = 7083705373147859988ULL;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)94;
unsigned short var_21 = (unsigned short)5374;
unsigned long long int var_22 = 16547906260100185754ULL;
int var_23 = 422884634;
signed char var_24 = (signed char)-71;
unsigned char var_25 = (unsigned char)141;
long long int var_26 = -2012524218586643441LL;
unsigned long long int var_27 = 13921029252085620756ULL;
long long int var_28 = 5760326178265019784LL;
short var_29 = (short)-32601;
signed char var_30 = (signed char)-82;
unsigned char var_31 = (unsigned char)83;
long long int var_32 = -2942323434117816457LL;
unsigned int var_33 = 3280703272U;
unsigned int var_34 = 1209666933U;
signed char var_35 = (signed char)1;
unsigned char var_36 = (unsigned char)16;
short var_37 = (short)12819;
long long int var_38 = 5018328022721843887LL;
unsigned char var_39 = (unsigned char)80;
unsigned long long int var_40 = 3018243468518276074ULL;
int var_41 = 666928571;
unsigned short var_42 = (unsigned short)49229;
short var_43 = (short)-5585;
unsigned char var_44 = (unsigned char)222;
unsigned char var_45 = (unsigned char)197;
long long int var_46 = -2473786333583248129LL;
unsigned short var_47 = (unsigned short)43353;
unsigned int var_48 = 847685744U;
short var_49 = (short)-27563;
unsigned long long int var_50 = 4277424651408426330ULL;
int var_51 = -1158489510;
long long int var_52 = 8786380900056523718LL;
unsigned int var_53 = 2821399638U;
unsigned short var_54 = (unsigned short)35987;
long long int var_55 = -1532622857679045101LL;
long long int var_56 = 3639195671534721023LL;
signed char var_57 = (signed char)-100;
_Bool var_58 = (_Bool)1;
unsigned short var_59 = (unsigned short)17790;
unsigned short var_60 = (unsigned short)58420;
signed char var_61 = (signed char)-60;
unsigned long long int var_62 = 12514026238803829878ULL;
unsigned char var_63 = (unsigned char)201;
signed char var_64 = (signed char)32;
int var_65 = -1571820608;
unsigned long long int arr_0 [21] ;
int arr_3 [22] [22] ;
unsigned short arr_4 [22] ;
int arr_5 [22] [22] ;
unsigned char arr_6 [22] ;
unsigned int arr_7 [22] [22] [22] [22] ;
long long int arr_8 [22] [22] [22] ;
unsigned long long int arr_9 [22] [22] [22] [22] ;
int arr_12 [22] [22] [22] [22] [22] [22] ;
_Bool arr_13 [22] [22] [22] [22] [22] [22] ;
unsigned short arr_15 [22] [22] [22] [22] [22] [22] ;
unsigned short arr_17 [10] ;
signed char arr_18 [10] [10] ;
int arr_22 [10] [10] [10] [10] ;
unsigned int arr_24 [10] [10] ;
unsigned long long int arr_25 [10] ;
int arr_26 [10] [10] [10] [10] [10] [10] [10] ;
unsigned long long int arr_29 [10] ;
_Bool arr_30 [10] [10] ;
_Bool arr_34 [10] [10] [10] [10] ;
int arr_37 [10] ;
unsigned long long int arr_39 [10] [10] [10] [10] ;
unsigned int arr_46 [10] [10] ;
long long int arr_47 [10] [10] [10] ;
short arr_48 [10] [10] ;
unsigned short arr_55 [10] [10] [10] [10] [10] ;
int arr_57 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 10660154070020826616ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = -957359714;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned short)10113;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 1569681488;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 790327706U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -8743881523998738625LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 15621275250866122406ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1106867399;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)64391;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = (unsigned short)11968;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_18 [i_0] [i_1] = (signed char)-4;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = -818575453;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_24 [i_0] [i_1] = 1112244816U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_25 [i_0] = 11229299996581973927ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 810223144;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_29 [i_0] = 7077392066487230928ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_30 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_37 [i_0] = 1005290824;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = 17561180299570953865ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_46 [i_0] [i_1] = 3480627012U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = -285958993084775274LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_48 [i_0] [i_1] = (short)-8415;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)1261;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_57 [i_0] [i_1] [i_2] = 1667085288;
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
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    hash(&seed, var_64);
    hash(&seed, var_65);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
