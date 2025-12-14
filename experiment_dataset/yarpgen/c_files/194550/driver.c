#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-32516;
unsigned int var_7 = 2586247110U;
unsigned short var_11 = (unsigned short)13774;
int var_12 = -844051122;
_Bool var_13 = (_Bool)0;
int var_15 = 1546879644;
unsigned long long int var_17 = 11953250411189009235ULL;
int zero = 0;
long long int var_18 = -4845487028752559631LL;
int var_19 = -988906254;
unsigned long long int var_20 = 8995666469579162563ULL;
unsigned short var_21 = (unsigned short)37786;
signed char var_22 = (signed char)-77;
int var_23 = 1491933675;
unsigned long long int var_24 = 252110737290191124ULL;
signed char var_25 = (signed char)-88;
unsigned short var_26 = (unsigned short)23831;
long long int var_27 = -6027178839123025847LL;
signed char var_28 = (signed char)-54;
int var_29 = 1261570783;
long long int var_30 = 2756857230850847181LL;
signed char var_31 = (signed char)-3;
unsigned char var_32 = (unsigned char)8;
unsigned long long int var_33 = 1216874585846831330ULL;
short var_34 = (short)-30618;
unsigned long long int var_35 = 13325137956906696049ULL;
_Bool var_36 = (_Bool)0;
long long int var_37 = -2667589691556955987LL;
unsigned int var_38 = 2192835458U;
signed char var_39 = (signed char)88;
short var_40 = (short)32179;
int var_41 = 1648950733;
long long int arr_1 [14] ;
long long int arr_2 [14] [14] [14] ;
unsigned long long int arr_3 [14] ;
long long int arr_4 [14] [14] [14] [14] ;
unsigned short arr_5 [14] [14] [14] [14] ;
_Bool arr_6 [14] [14] [14] [14] ;
unsigned long long int arr_7 [14] [14] [14] [14] [14] ;
unsigned char arr_8 [14] ;
long long int arr_11 [14] [14] [14] [14] [14] [14] [14] ;
int arr_12 [14] ;
unsigned char arr_13 [14] ;
signed char arr_14 [14] [14] [14] ;
unsigned short arr_15 [14] [14] ;
unsigned char arr_19 [13] ;
unsigned short arr_21 [13] [13] ;
unsigned short arr_22 [13] [13] ;
unsigned long long int arr_23 [13] [13] ;
long long int arr_26 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 8176534719231359996LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -7746674439534568980LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 8192009269305683620ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = -2109093540556472040LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (unsigned short)28856;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = 12958906345714341698ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -2669536519509860751LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -760023302 : 949634526;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (unsigned char)80;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (signed char)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)41633;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_19 [i_0] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned short)36275;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_22 [i_0] [i_1] = (unsigned short)16025;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_23 [i_0] [i_1] = 6006402715108609867ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = -4765836149278053162LL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
