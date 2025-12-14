#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15515099597640060454ULL;
unsigned int var_1 = 299440408U;
unsigned long long int var_2 = 2151203751230195127ULL;
unsigned long long int var_4 = 14819178594411541594ULL;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)1;
long long int var_8 = -7484296159864421235LL;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-119;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1258291728U;
signed char var_15 = (signed char)103;
signed char var_16 = (signed char)-67;
int zero = 0;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)189;
unsigned int var_22 = 1986557903U;
int var_23 = -337984881;
unsigned short var_24 = (unsigned short)7774;
long long int var_25 = -2151325701137643863LL;
int var_26 = 1318106849;
unsigned int var_27 = 1221048539U;
signed char var_28 = (signed char)-67;
long long int var_29 = 6718737862126906307LL;
signed char var_30 = (signed char)-117;
_Bool var_31 = (_Bool)0;
signed char var_32 = (signed char)-62;
signed char var_33 = (signed char)33;
int var_34 = -1983474605;
unsigned int var_35 = 2868714692U;
signed char var_36 = (signed char)73;
unsigned int var_37 = 865307935U;
signed char var_38 = (signed char)-47;
int var_39 = -1010124809;
unsigned char var_40 = (unsigned char)177;
int var_41 = -1563273886;
unsigned int var_42 = 3155108658U;
long long int var_43 = -7207374417086447004LL;
unsigned int var_44 = 1735163589U;
signed char var_45 = (signed char)0;
_Bool var_46 = (_Bool)0;
_Bool var_47 = (_Bool)1;
unsigned short var_48 = (unsigned short)19262;
unsigned int var_49 = 319569554U;
unsigned int var_50 = 326264470U;
unsigned int var_51 = 1149365899U;
int var_52 = 1227505038;
int var_53 = -505695685;
unsigned int var_54 = 465735797U;
signed char var_55 = (signed char)-5;
unsigned short var_56 = (unsigned short)26261;
int var_57 = 1080534419;
_Bool arr_0 [10] [10] ;
signed char arr_2 [10] ;
unsigned int arr_4 [10] [10] [10] ;
_Bool arr_8 [10] [10] [10] [10] ;
unsigned long long int arr_12 [10] [10] [10] [10] [10] [10] [10] ;
unsigned int arr_13 [10] [10] [10] [10] [10] ;
long long int arr_17 [20] [20] ;
unsigned long long int arr_18 [20] ;
long long int arr_19 [20] ;
unsigned short arr_21 [20] ;
signed char arr_26 [20] [20] [20] ;
unsigned char arr_31 [20] [20] [20] [20] ;
int arr_34 [20] ;
unsigned int arr_36 [20] [20] ;
signed char arr_38 [20] [20] [20] [20] ;
unsigned int arr_39 [20] [20] [20] [20] ;
unsigned long long int arr_44 [20] [20] [20] ;
unsigned long long int arr_51 [20] [20] [20] ;
unsigned short arr_54 [20] [20] ;
int arr_61 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1895319760U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 12322005028023572414ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = 1533229747U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_17 [i_0] [i_1] = 2039929805776914578LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_18 [i_0] = 15985628398402164895ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_19 [i_0] = 8032218584647835666LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_21 [i_0] = (unsigned short)65203;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-76 : (signed char)51;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_34 [i_0] = (i_0 % 2 == 0) ? -2133160529 : 2035555556;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_36 [i_0] [i_1] = (i_1 % 2 == 0) ? 4048734319U : 2389287979U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = 106792246U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = 14347819291751684606ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_51 [i_0] [i_1] [i_2] = 12617650264927270719ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_54 [i_0] [i_1] = (unsigned short)33025;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_61 [i_0] [i_1] [i_2] [i_3] = 738143770;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
