#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)103;
_Bool var_3 = (_Bool)1;
short var_4 = (short)20573;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)64;
signed char var_7 = (signed char)108;
signed char var_8 = (signed char)35;
short var_9 = (short)-4161;
_Bool var_10 = (_Bool)0;
int var_11 = -1229323231;
_Bool var_12 = (_Bool)1;
int var_13 = 1089431705;
signed char var_14 = (signed char)59;
signed char var_15 = (signed char)31;
unsigned short var_16 = (unsigned short)8936;
_Bool var_17 = (_Bool)0;
signed char var_19 = (signed char)7;
int zero = 0;
signed char var_20 = (signed char)-4;
short var_21 = (short)-175;
unsigned char var_22 = (unsigned char)125;
long long int var_23 = 9215204527046085831LL;
int var_24 = -394666569;
short var_25 = (short)29554;
signed char var_26 = (signed char)-40;
signed char var_27 = (signed char)-59;
unsigned char var_28 = (unsigned char)136;
_Bool var_29 = (_Bool)1;
int var_30 = -821298456;
short var_31 = (short)-11815;
unsigned long long int var_32 = 5384955073039033329ULL;
_Bool var_33 = (_Bool)1;
int var_34 = -1796664548;
signed char var_35 = (signed char)-44;
signed char var_36 = (signed char)-101;
unsigned char var_37 = (unsigned char)137;
unsigned short var_38 = (unsigned short)37518;
short var_39 = (short)-7823;
unsigned long long int var_40 = 1911384043262653364ULL;
short var_41 = (short)6431;
unsigned char var_42 = (unsigned char)168;
_Bool var_43 = (_Bool)1;
unsigned char var_44 = (unsigned char)208;
_Bool var_45 = (_Bool)0;
signed char var_46 = (signed char)-23;
unsigned char arr_2 [15] ;
_Bool arr_3 [15] ;
_Bool arr_6 [15] [15] [15] ;
unsigned long long int arr_12 [15] [15] [15] [15] ;
unsigned long long int arr_13 [15] [15] [15] ;
signed char arr_17 [15] ;
_Bool arr_20 [15] ;
unsigned short arr_22 [15] [15] [15] [15] ;
signed char arr_45 [19] ;
unsigned char arr_54 [19] [19] ;
signed char arr_55 [19] [19] ;
_Bool arr_9 [15] ;
_Bool arr_10 [15] ;
_Bool arr_14 [15] ;
_Bool arr_18 [15] [15] [15] ;
unsigned char arr_35 [15] [15] ;
int arr_38 [15] [15] [15] ;
signed char arr_39 [15] [15] ;
signed char arr_42 [15] ;
unsigned char arr_43 [15] ;
short arr_56 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 763940843289716861ULL : 773644834402452460ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 10943771996978158701ULL : 4222369573766900649ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = (signed char)52;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_20 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (unsigned short)52836;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_45 [i_0] = (signed char)-124;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_54 [i_0] [i_1] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_55 [i_0] [i_1] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_35 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)143 : (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = -802599794;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_39 [i_0] [i_1] = (signed char)5;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_42 [i_0] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_43 [i_0] = (unsigned char)24;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_56 [i_0] = (short)15924;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_35 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_38 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_39 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_42 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_43 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_56 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
