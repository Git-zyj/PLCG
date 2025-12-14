#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -5158001762553002036LL;
unsigned int var_2 = 2309284165U;
long long int var_3 = 1270699835742314928LL;
unsigned int var_4 = 3856485141U;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)197;
long long int var_9 = -7395847207781780069LL;
unsigned int var_11 = 1366663755U;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)144;
int zero = 0;
long long int var_15 = 1880286560806285800LL;
int var_16 = -1103793086;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-21799;
int var_19 = -1143157305;
unsigned short var_20 = (unsigned short)31223;
unsigned short var_21 = (unsigned short)23002;
unsigned int var_22 = 634452396U;
long long int var_23 = -4556347231811644678LL;
unsigned long long int var_24 = 13639344371065658514ULL;
signed char var_25 = (signed char)123;
_Bool var_26 = (_Bool)1;
short var_27 = (short)-10884;
long long int var_28 = -2770448267777359095LL;
unsigned short var_29 = (unsigned short)64901;
unsigned short var_30 = (unsigned short)9811;
unsigned long long int var_31 = 6385302230058891550ULL;
unsigned long long int var_32 = 9341317658427609301ULL;
signed char var_33 = (signed char)93;
signed char var_34 = (signed char)85;
long long int var_35 = 5395563833934481726LL;
unsigned short var_36 = (unsigned short)59211;
unsigned char var_37 = (unsigned char)251;
unsigned char var_38 = (unsigned char)177;
signed char var_39 = (signed char)-66;
unsigned long long int var_40 = 2285722522162462679ULL;
short var_41 = (short)-4502;
short var_42 = (short)6264;
unsigned char var_43 = (unsigned char)152;
unsigned short arr_0 [20] [20] ;
unsigned int arr_1 [20] ;
long long int arr_2 [20] [20] [20] ;
_Bool arr_3 [20] ;
unsigned char arr_6 [20] [20] [20] ;
unsigned short arr_7 [20] ;
unsigned int arr_9 [16] ;
signed char arr_10 [16] ;
unsigned int arr_11 [16] ;
unsigned short arr_12 [16] ;
unsigned long long int arr_14 [16] ;
long long int arr_15 [16] [16] [16] ;
unsigned char arr_16 [16] [16] ;
_Bool arr_17 [16] ;
unsigned char arr_22 [16] ;
long long int arr_24 [16] ;
unsigned long long int arr_25 [16] [16] [16] ;
unsigned int arr_27 [16] ;
signed char arr_29 [16] [16] ;
_Bool arr_30 [16] [16] ;
_Bool arr_32 [11] ;
short arr_33 [11] ;
unsigned short arr_36 [11] ;
_Bool arr_37 [11] ;
short arr_45 [11] [11] [11] ;
unsigned char arr_5 [20] ;
unsigned long long int arr_8 [20] ;
signed char arr_19 [16] [16] ;
unsigned int arr_20 [16] ;
unsigned char arr_23 [16] ;
signed char arr_31 [16] [16] [16] ;
unsigned short arr_34 [11] ;
unsigned short arr_35 [11] ;
unsigned long long int arr_38 [11] ;
short arr_48 [11] [11] [11] [11] ;
_Bool arr_49 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)14544;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 1356352298U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1762984187534268731LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (unsigned short)12756;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = 2647487805U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (signed char)-60;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = 1710421016U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (unsigned short)12434;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 9912561773134070311ULL : 13345702926704161693ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = -3356207136398823409LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)232;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_22 [i_0] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_24 [i_0] = 7040655422729542961LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = 14668334674302999832ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_27 [i_0] = 34197090U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_29 [i_0] [i_1] = (signed char)50;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_30 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_32 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_33 [i_0] = (short)-18786;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_36 [i_0] = (unsigned short)62316;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_37 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_45 [i_0] [i_1] [i_2] = (short)17225;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)174 : (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 4158143705545573378ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)59 : (signed char)99;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = 761194932U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_23 [i_0] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (signed char)21;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_34 [i_0] = (unsigned short)41490;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_35 [i_0] = (unsigned short)13624;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_38 [i_0] = 9409057087280568756ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_48 [i_0] [i_1] [i_2] [i_3] = (short)-10400;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_49 [i_0] = (_Bool)0;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_31 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_34 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_48 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_49 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
