#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10905;
int var_2 = -1229050943;
unsigned char var_3 = (unsigned char)68;
signed char var_4 = (signed char)16;
int var_8 = 1125208574;
short var_9 = (short)1644;
int var_10 = -326512552;
short var_13 = (short)15517;
unsigned char var_16 = (unsigned char)81;
signed char var_17 = (signed char)84;
unsigned long long int var_18 = 15654077991912616725ULL;
int var_19 = 1522638589;
int zero = 0;
unsigned long long int var_20 = 10407777564601922327ULL;
unsigned char var_21 = (unsigned char)46;
unsigned int var_22 = 2511059414U;
unsigned char var_23 = (unsigned char)133;
_Bool var_24 = (_Bool)1;
unsigned int var_25 = 732602090U;
short var_26 = (short)-3276;
signed char var_27 = (signed char)83;
int var_28 = 1216908354;
short var_29 = (short)-3164;
signed char var_30 = (signed char)-72;
unsigned char var_31 = (unsigned char)217;
unsigned short var_32 = (unsigned short)53741;
unsigned short var_33 = (unsigned short)14853;
long long int var_34 = -8460634443797766325LL;
_Bool var_35 = (_Bool)0;
unsigned int var_36 = 1096678255U;
unsigned int var_37 = 1826464476U;
unsigned char var_38 = (unsigned char)240;
unsigned int var_39 = 1582689530U;
unsigned int var_40 = 1359587177U;
unsigned char var_41 = (unsigned char)130;
unsigned int var_42 = 818835070U;
signed char var_43 = (signed char)-36;
_Bool var_44 = (_Bool)0;
short var_45 = (short)-26832;
signed char var_46 = (signed char)82;
unsigned long long int var_47 = 6147147514603342882ULL;
signed char var_48 = (signed char)-117;
short arr_0 [19] ;
unsigned int arr_1 [19] [19] ;
unsigned int arr_2 [19] ;
short arr_3 [19] ;
unsigned long long int arr_4 [19] [19] ;
int arr_7 [19] [19] [19] ;
unsigned char arr_8 [19] [19] [19] ;
unsigned int arr_11 [19] [19] [19] [19] ;
signed char arr_12 [19] [19] [19] [19] ;
unsigned char arr_13 [19] [19] [19] ;
unsigned short arr_18 [19] [19] [19] [19] [19] ;
signed char arr_24 [19] [19] [19] [19] [19] ;
short arr_34 [19] ;
short arr_40 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)-5533;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 1140161733U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 2034044788U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (short)3757;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 979215984079391823ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1206566088 : 437627720;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)186 : (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 1678575829U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-72 : (signed char)-7;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)44 : (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)21203;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_34 [i_0] = (i_0 % 2 == 0) ? (short)-16239 : (short)22082;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = (short)25981;
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
    hash(&seed, var_47);
    hash(&seed, var_48);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
