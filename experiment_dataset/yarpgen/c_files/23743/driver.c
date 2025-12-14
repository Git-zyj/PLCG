#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)70;
unsigned char var_1 = (unsigned char)11;
unsigned int var_2 = 958720652U;
signed char var_3 = (signed char)1;
unsigned short var_4 = (unsigned short)13344;
unsigned char var_5 = (unsigned char)134;
_Bool var_6 = (_Bool)0;
int var_7 = -1046474089;
signed char var_8 = (signed char)-90;
unsigned short var_9 = (unsigned short)24663;
unsigned short var_10 = (unsigned short)62267;
_Bool var_11 = (_Bool)1;
long long int var_12 = -193609209758528447LL;
short var_13 = (short)-27198;
int zero = 0;
int var_14 = 1714823530;
unsigned long long int var_15 = 2157035545200490418ULL;
unsigned short var_16 = (unsigned short)27451;
signed char var_17 = (signed char)-31;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)13653;
unsigned short var_20 = (unsigned short)47127;
unsigned int var_21 = 3412615707U;
signed char var_22 = (signed char)-108;
short var_23 = (short)1591;
_Bool var_24 = (_Bool)1;
long long int var_25 = 2558036610976859673LL;
short var_26 = (short)26274;
int var_27 = -1971606399;
_Bool var_28 = (_Bool)0;
short var_29 = (short)22459;
long long int var_30 = -1179017769440779831LL;
unsigned long long int var_31 = 18052000311175866743ULL;
_Bool var_32 = (_Bool)0;
unsigned short var_33 = (unsigned short)8187;
signed char var_34 = (signed char)-106;
unsigned int var_35 = 2232071629U;
_Bool var_36 = (_Bool)0;
int var_37 = -129477080;
_Bool var_38 = (_Bool)0;
unsigned short var_39 = (unsigned short)31727;
int var_40 = 878843298;
short var_41 = (short)19262;
long long int var_42 = 7644648707638522847LL;
unsigned long long int var_43 = 2590130769219154527ULL;
unsigned int var_44 = 2565413634U;
unsigned int var_45 = 2971638506U;
unsigned int arr_0 [22] ;
long long int arr_1 [22] ;
short arr_2 [22] ;
unsigned int arr_3 [22] ;
unsigned int arr_4 [22] ;
unsigned int arr_5 [22] [22] ;
unsigned char arr_6 [22] ;
unsigned int arr_7 [22] [22] ;
_Bool arr_8 [22] [22] [22] ;
short arr_10 [22] [22] [22] [22] ;
unsigned int arr_16 [22] [22] [22] ;
long long int arr_20 [22] [22] [22] [22] [22] [22] ;
unsigned int arr_21 [22] ;
short arr_23 [22] [22] [22] ;
long long int arr_26 [22] [22] [22] ;
long long int arr_27 [22] ;
unsigned int arr_29 [22] [22] [22] [22] ;
unsigned short arr_32 [22] ;
int arr_15 [22] [22] [22] ;
unsigned short arr_25 [22] [22] [22] [22] ;
_Bool arr_33 [22] [22] [22] [22] ;
unsigned long long int arr_34 [22] ;
long long int arr_40 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 2335792493U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -5257700709675843498LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (short)14707;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 4292728445U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 956050461U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 1147238161U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = 1034304202U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (short)14888;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 2921343495U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1466388780045376400LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_21 [i_0] = 3386915512U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (short)-6006;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = 4885245324033029263LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_27 [i_0] = 2415752421802737173LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = 1022970920U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_32 [i_0] = (unsigned short)4320;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 663920523;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (unsigned short)61477;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_34 [i_0] = 13503607094992872136ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_40 [i_0] = -6279201615869431815LL;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_33 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_34 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_40 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
