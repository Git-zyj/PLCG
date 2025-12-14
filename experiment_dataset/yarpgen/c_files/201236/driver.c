#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3280178112116016047LL;
unsigned long long int var_3 = 12702544309347658807ULL;
long long int var_5 = 2702811760380664739LL;
unsigned int var_6 = 2085173408U;
unsigned long long int var_7 = 9453765631911558149ULL;
int var_9 = 540405956;
signed char var_10 = (signed char)19;
unsigned short var_12 = (unsigned short)33364;
int zero = 0;
unsigned int var_13 = 2934104472U;
unsigned short var_14 = (unsigned short)47444;
long long int var_15 = 3113766986305795155LL;
signed char var_16 = (signed char)78;
unsigned int var_17 = 2717690209U;
long long int var_18 = -7923117315429691935LL;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)57102;
short var_21 = (short)3931;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-10822;
long long int var_24 = 1783314812419128630LL;
long long int var_25 = 1086604993097235863LL;
unsigned long long int var_26 = 17055645583885682264ULL;
signed char var_27 = (signed char)-66;
unsigned long long int var_28 = 22049102003643028ULL;
unsigned short var_29 = (unsigned short)22267;
unsigned long long int var_30 = 4627159948493848780ULL;
unsigned int var_31 = 1989507180U;
signed char var_32 = (signed char)1;
unsigned short arr_0 [16] ;
short arr_2 [16] [16] ;
long long int arr_3 [16] ;
long long int arr_5 [16] ;
int arr_7 [16] [16] [16] ;
signed char arr_8 [16] [16] [16] [16] ;
short arr_12 [16] [16] ;
signed char arr_14 [16] [16] [16] ;
short arr_16 [16] [16] [16] ;
short arr_17 [16] ;
unsigned long long int arr_19 [16] [16] ;
_Bool arr_21 [16] [16] [16] [16] [16] [16] ;
_Bool arr_26 [16] [16] [16] [16] ;
short arr_27 [16] [16] [16] [16] [16] [16] ;
_Bool arr_29 [16] ;
unsigned short arr_38 [12] [12] [12] ;
signed char arr_4 [16] [16] [16] ;
short arr_11 [16] [16] [16] ;
_Bool arr_30 [16] [16] ;
signed char arr_31 [16] [16] [16] ;
unsigned short arr_32 [16] [16] [16] ;
signed char arr_44 [12] [12] [12] [12] ;
unsigned int arr_45 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)21301;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (short)8983;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -320762630474728960LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = -2959146110930316148LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -1925141740;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)-101;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-17491 : (short)-20914;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-36 : (signed char)-106;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)27196 : (short)16649;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (short)-29241 : (short)-29368;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_19 [i_0] [i_1] = 7228123414941895243ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-31364;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_29 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (unsigned short)59953;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)-3501;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_30 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-57 : (signed char)-127;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)29741 : (unsigned short)32130;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_44 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)-99 : (signed char)88;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_45 [i_0] [i_1] = (i_0 % 2 == 0) ? 3489897528U : 2356885045U;
}

void checksum() {
    hash(&seed, var_13);
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_31 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_32 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_44 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_45 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
