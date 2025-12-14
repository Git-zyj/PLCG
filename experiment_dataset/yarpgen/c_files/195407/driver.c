#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22990;
_Bool var_7 = (_Bool)0;
unsigned short var_9 = (unsigned short)27585;
unsigned char var_11 = (unsigned char)19;
int zero = 0;
unsigned char var_20 = (unsigned char)170;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)32613;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)0;
unsigned char var_25 = (unsigned char)205;
unsigned char var_26 = (unsigned char)200;
unsigned short var_27 = (unsigned short)17356;
unsigned char var_28 = (unsigned char)132;
_Bool var_29 = (_Bool)0;
_Bool var_30 = (_Bool)1;
_Bool var_31 = (_Bool)0;
_Bool var_32 = (_Bool)1;
unsigned char var_33 = (unsigned char)135;
_Bool var_34 = (_Bool)0;
unsigned short var_35 = (unsigned short)22409;
unsigned char var_36 = (unsigned char)89;
unsigned short var_37 = (unsigned short)33654;
unsigned short var_38 = (unsigned short)26056;
_Bool var_39 = (_Bool)0;
_Bool var_40 = (_Bool)0;
unsigned short var_41 = (unsigned short)19849;
unsigned short var_42 = (unsigned short)37762;
_Bool var_43 = (_Bool)1;
unsigned short var_44 = (unsigned short)25856;
unsigned short var_45 = (unsigned short)37449;
unsigned char arr_0 [24] ;
unsigned char arr_1 [24] ;
unsigned char arr_3 [24] ;
unsigned char arr_4 [24] ;
unsigned short arr_5 [20] ;
unsigned short arr_6 [20] ;
unsigned char arr_7 [20] [20] ;
unsigned char arr_10 [12] ;
unsigned short arr_12 [12] [12] ;
unsigned char arr_13 [12] [12] ;
unsigned char arr_15 [12] [12] [12] ;
unsigned short arr_16 [12] [12] ;
_Bool arr_18 [12] [12] [12] [12] ;
unsigned char arr_19 [12] [12] [12] [12] ;
_Bool arr_20 [12] [12] [12] ;
unsigned char arr_32 [12] [12] [12] [12] ;
unsigned char arr_33 [12] [12] [12] [12] [12] [12] ;
unsigned short arr_46 [17] [17] ;
unsigned short arr_8 [20] ;
unsigned char arr_24 [12] ;
unsigned char arr_39 [12] ;
unsigned short arr_44 [12] ;
unsigned short arr_48 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)93 : (unsigned char)246;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)86 : (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (unsigned short)48265;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned short)5924;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)39426 : (unsigned short)54154;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)119 : (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)236 : (unsigned char)24;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)24011 : (unsigned short)10350;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)181 : (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (unsigned char)244 : (unsigned char)59;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_46 [i_0] [i_1] = (unsigned short)65339;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (unsigned short)19616;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (unsigned char)211 : (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_39 [i_0] = (i_0 % 2 == 0) ? (unsigned char)94 : (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_44 [i_0] = (i_0 % 2 == 0) ? (unsigned short)46124 : (unsigned short)47839;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_48 [i_0] = (unsigned short)33344;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_44 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_48 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
