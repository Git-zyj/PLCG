#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 1103669933U;
unsigned long long int var_2 = 1717846467691595679ULL;
long long int var_3 = -2662906002570041836LL;
long long int var_4 = -4732708620102977106LL;
unsigned long long int var_5 = 11944674479105203761ULL;
signed char var_6 = (signed char)0;
unsigned long long int var_8 = 17469772881675179787ULL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 14637060993992634254ULL;
int var_11 = -346353803;
short var_12 = (short)14609;
signed char var_13 = (signed char)-59;
long long int var_14 = 135705936364117480LL;
long long int var_15 = 1616210784524602062LL;
unsigned long long int var_16 = 14146811577346008923ULL;
unsigned int var_17 = 361315571U;
int zero = 0;
unsigned int var_18 = 4039296470U;
unsigned short var_19 = (unsigned short)49756;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)127;
short var_22 = (short)-4849;
unsigned long long int var_23 = 15233412857038375810ULL;
unsigned short var_24 = (unsigned short)39875;
unsigned char var_25 = (unsigned char)206;
unsigned int var_26 = 3094755797U;
unsigned short var_27 = (unsigned short)65528;
long long int var_28 = -3866763467417394808LL;
unsigned short var_29 = (unsigned short)59039;
unsigned int var_30 = 2472835931U;
unsigned char var_31 = (unsigned char)11;
int var_32 = 1228720095;
unsigned short var_33 = (unsigned short)22933;
_Bool var_34 = (_Bool)0;
unsigned long long int var_35 = 16761528558538415090ULL;
long long int var_36 = 1963597518089717409LL;
unsigned char var_37 = (unsigned char)200;
short arr_0 [19] [19] ;
signed char arr_1 [19] [19] ;
short arr_2 [19] ;
long long int arr_3 [19] [19] ;
unsigned short arr_5 [15] ;
unsigned short arr_6 [15] ;
unsigned int arr_7 [15] ;
unsigned char arr_9 [15] ;
unsigned short arr_10 [15] [15] ;
long long int arr_11 [15] ;
unsigned int arr_12 [16] ;
int arr_14 [16] ;
short arr_16 [16] [16] ;
unsigned int arr_19 [16] [16] [16] ;
signed char arr_24 [16] ;
short arr_25 [16] [16] ;
short arr_31 [22] ;
unsigned int arr_37 [22] [22] ;
unsigned long long int arr_4 [19] ;
unsigned long long int arr_8 [15] [15] ;
signed char arr_20 [16] ;
unsigned short arr_21 [16] [16] ;
unsigned char arr_22 [16] [16] [16] ;
signed char arr_28 [13] ;
long long int arr_29 [13] ;
int arr_32 [22] ;
long long int arr_35 [13] ;
int arr_38 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (short)3750;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)98;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (short)17111;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 529998015083660635LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned short)18369;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (unsigned short)39803;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 2031442535U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)37350;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = -4315319451322600468LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = 209841451U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = 520962665;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)21666 : (short)24093;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 4240097682U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_24 [i_0] = (signed char)-31;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_25 [i_0] [i_1] = (short)-14417;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_31 [i_0] = (short)-26755;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_37 [i_0] [i_1] = 1546628150U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 14674375167622609326ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 9233125911127966169ULL : 5321136257322987865ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (signed char)-10 : (signed char)19;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)56156 : (unsigned short)30433;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)255 : (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_28 [i_0] = (signed char)105;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_29 [i_0] = -7236644224583048506LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? -110069218 : -187157838;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_35 [i_0] = -4585721490604258387LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_38 [i_0] = -212480159;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_38 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
