#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -151770290;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-80;
short var_4 = (short)30127;
unsigned short var_5 = (unsigned short)50910;
short var_6 = (short)-20150;
int var_7 = -1998993508;
unsigned long long int var_8 = 12444620622185927020ULL;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-1711;
unsigned long long int var_12 = 15234536382089326505ULL;
unsigned short var_13 = (unsigned short)36874;
unsigned short var_14 = (unsigned short)42336;
unsigned short var_15 = (unsigned short)14808;
int zero = 0;
unsigned long long int var_17 = 2368648554529547750ULL;
signed char var_18 = (signed char)66;
unsigned char var_19 = (unsigned char)70;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)64158;
long long int var_22 = -1349455225625796772LL;
unsigned char var_23 = (unsigned char)201;
unsigned int var_24 = 4089821704U;
unsigned long long int var_25 = 6217997137063802420ULL;
unsigned long long int var_26 = 11017744892973128776ULL;
unsigned short var_27 = (unsigned short)24836;
short var_28 = (short)-11070;
unsigned int var_29 = 886363101U;
unsigned short var_30 = (unsigned short)43167;
long long int var_31 = -358455082745425964LL;
unsigned char var_32 = (unsigned char)162;
signed char var_33 = (signed char)121;
unsigned short var_34 = (unsigned short)54471;
short var_35 = (short)3174;
int var_36 = -531198174;
int var_37 = 670375941;
unsigned long long int var_38 = 14031900590325193653ULL;
short var_39 = (short)-1989;
unsigned long long int var_40 = 16986876646166985841ULL;
signed char var_41 = (signed char)31;
int var_42 = -1620092800;
unsigned int var_43 = 3257986849U;
signed char var_44 = (signed char)-116;
unsigned int var_45 = 1816483345U;
unsigned char var_46 = (unsigned char)81;
int var_47 = -874235088;
_Bool var_48 = (_Bool)0;
short var_49 = (short)17330;
long long int var_50 = 5874489399708847176LL;
short var_51 = (short)14422;
unsigned int var_52 = 2509086042U;
unsigned char var_53 = (unsigned char)7;
short var_54 = (short)1335;
unsigned char var_55 = (unsigned char)86;
unsigned char var_56 = (unsigned char)164;
unsigned char var_57 = (unsigned char)242;
unsigned int var_58 = 1836937979U;
unsigned long long int var_59 = 7084488929997716726ULL;
signed char var_60 = (signed char)-109;
_Bool arr_0 [15] ;
unsigned short arr_2 [15] ;
unsigned char arr_4 [15] ;
_Bool arr_5 [15] ;
short arr_8 [15] ;
_Bool arr_11 [15] [15] [15] [15] ;
unsigned long long int arr_14 [15] [15] [15] [15] [15] [15] ;
unsigned long long int arr_18 [15] [15] [15] [15] [15] ;
short arr_20 [15] [15] ;
long long int arr_25 [15] [15] [15] ;
unsigned short arr_27 [15] [15] [15] [15] ;
signed char arr_40 [25] [25] [25] ;
long long int arr_41 [25] ;
signed char arr_47 [15] ;
int arr_10 [15] [15] [15] ;
unsigned int arr_15 [15] [15] [15] [15] [15] [15] ;
unsigned char arr_22 [15] [15] [15] [15] ;
_Bool arr_36 [14] ;
unsigned short arr_37 [14] ;
long long int arr_46 [11] ;
unsigned int arr_57 [14] ;
unsigned int arr_60 [14] ;
unsigned short arr_61 [14] [14] ;
unsigned long long int arr_62 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)1786;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (short)-32747;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1218057988930300060ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = 16944602862609060067ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)25498 : (short)22464;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = 228132144530994342LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)50945 : (unsigned short)16691;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = (signed char)92;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_41 [i_0] = -8094803402630973602LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_47 [i_0] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 599213985;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 960809417U : 4000997969U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)76 : (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_36 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_37 [i_0] = (unsigned short)17541;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_46 [i_0] = -2675397295055030242LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_57 [i_0] = 2822173733U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_60 [i_0] = (i_0 % 2 == 0) ? 4219939317U : 203325055U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_61 [i_0] [i_1] = (unsigned short)32735;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_62 [i_0] = 593301500340024686ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_37 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_46 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_57 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_60 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_61 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_62 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
