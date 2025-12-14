#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-37;
short var_1 = (short)7823;
unsigned char var_2 = (unsigned char)42;
unsigned char var_3 = (unsigned char)139;
unsigned int var_4 = 3880035885U;
signed char var_5 = (signed char)109;
unsigned char var_6 = (unsigned char)247;
unsigned char var_7 = (unsigned char)212;
unsigned short var_8 = (unsigned short)29236;
unsigned char var_9 = (unsigned char)66;
unsigned char var_10 = (unsigned char)134;
unsigned short var_11 = (unsigned short)49594;
short var_12 = (short)12577;
unsigned int var_13 = 3764145008U;
unsigned char var_14 = (unsigned char)220;
long long int var_15 = 3073206758826767817LL;
signed char var_16 = (signed char)-17;
short var_17 = (short)26879;
long long int var_18 = 1871380097687064931LL;
int zero = 0;
signed char var_19 = (signed char)80;
_Bool var_20 = (_Bool)0;
short var_21 = (short)19267;
short var_22 = (short)1738;
int var_23 = 1841016553;
unsigned int var_24 = 4272493270U;
unsigned long long int var_25 = 7435081326618578287ULL;
unsigned char var_26 = (unsigned char)234;
long long int var_27 = 7223165412021853788LL;
short var_28 = (short)16693;
unsigned short var_29 = (unsigned short)32943;
unsigned long long int var_30 = 2825305340004484241ULL;
signed char var_31 = (signed char)50;
unsigned char var_32 = (unsigned char)117;
unsigned char var_33 = (unsigned char)38;
int var_34 = 528039227;
short var_35 = (short)-31076;
int var_36 = 703239019;
unsigned char var_37 = (unsigned char)179;
short var_38 = (short)26735;
_Bool var_39 = (_Bool)1;
signed char var_40 = (signed char)-93;
unsigned long long int var_41 = 12444335869646439283ULL;
_Bool var_42 = (_Bool)0;
_Bool var_43 = (_Bool)1;
unsigned long long int var_44 = 5843765471848507661ULL;
long long int var_45 = -8338074158784493337LL;
long long int var_46 = -6382232557621435147LL;
_Bool var_47 = (_Bool)1;
unsigned short var_48 = (unsigned short)42116;
signed char var_49 = (signed char)-82;
_Bool var_50 = (_Bool)0;
unsigned short var_51 = (unsigned short)18433;
long long int var_52 = 1182799665773910416LL;
long long int var_53 = 4298705996087547535LL;
unsigned long long int var_54 = 9837015199778162551ULL;
int var_55 = -1807750785;
int arr_2 [18] [18] ;
unsigned char arr_5 [18] ;
unsigned char arr_9 [19] ;
signed char arr_41 [13] [13] ;
unsigned long long int arr_42 [13] [13] [13] ;
unsigned int arr_64 [17] [17] [17] [17] ;
_Bool arr_68 [17] [17] [17] [17] ;
unsigned short arr_69 [17] [17] ;
signed char arr_70 [17] [17] [17] [17] ;
unsigned char arr_71 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 51582609 : -1126388815;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)229 : (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (unsigned char)159;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_41 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)53 : (signed char)-125;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 7414516457571439731ULL : 17827634245558642256ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_64 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 2415981239U : 856986629U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_68 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_69 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)10143 : (unsigned short)398;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_70 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)-74 : (signed char)-41;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_71 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)184 : (unsigned char)21;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_41 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_42 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_64 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_68 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_69 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_70 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_71 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
