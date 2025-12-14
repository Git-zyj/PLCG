#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17631;
long long int var_1 = -2021884414786995213LL;
unsigned short var_2 = (unsigned short)21856;
short var_3 = (short)5057;
signed char var_4 = (signed char)21;
signed char var_5 = (signed char)58;
short var_6 = (short)-18873;
unsigned short var_7 = (unsigned short)65255;
unsigned int var_8 = 334608763U;
unsigned char var_11 = (unsigned char)85;
unsigned long long int var_12 = 15513886761707757232ULL;
unsigned long long int var_13 = 16219338171279980206ULL;
unsigned char var_14 = (unsigned char)220;
unsigned char var_15 = (unsigned char)101;
signed char var_16 = (signed char)-57;
signed char var_18 = (signed char)30;
short var_19 = (short)-11065;
int zero = 0;
int var_20 = -371761024;
int var_21 = -1079912042;
long long int var_22 = -7783000023978943420LL;
unsigned long long int var_23 = 17026407080790501587ULL;
int var_24 = 1002762185;
_Bool var_25 = (_Bool)0;
signed char var_26 = (signed char)102;
unsigned short var_27 = (unsigned short)19075;
long long int var_28 = -8850170794770612968LL;
unsigned short var_29 = (unsigned short)14142;
_Bool var_30 = (_Bool)0;
short var_31 = (short)18444;
int var_32 = -156276461;
unsigned int var_33 = 3463742679U;
short var_34 = (short)-24068;
unsigned short var_35 = (unsigned short)60724;
int var_36 = -213287826;
short var_37 = (short)-31879;
unsigned short var_38 = (unsigned short)33133;
signed char var_39 = (signed char)-101;
short var_40 = (short)-10247;
unsigned short var_41 = (unsigned short)8685;
unsigned int var_42 = 541366515U;
_Bool var_43 = (_Bool)0;
unsigned short var_44 = (unsigned short)18414;
signed char var_45 = (signed char)-126;
unsigned int var_46 = 439107406U;
unsigned short var_47 = (unsigned short)8634;
unsigned short var_48 = (unsigned short)38924;
short var_49 = (short)8929;
short var_50 = (short)-25194;
unsigned long long int var_51 = 8110196734078506710ULL;
unsigned long long int arr_0 [21] ;
unsigned int arr_2 [21] ;
signed char arr_4 [21] [21] [21] ;
signed char arr_5 [21] [21] [21] [21] ;
unsigned short arr_6 [21] ;
long long int arr_7 [21] ;
unsigned long long int arr_12 [21] [21] [21] [21] [21] ;
unsigned short arr_18 [21] [21] [21] [21] ;
unsigned short arr_20 [21] [21] [21] [21] ;
unsigned long long int arr_23 [21] [21] [21] [21] [21] ;
unsigned long long int arr_24 [21] [21] [21] ;
unsigned long long int arr_25 [21] [21] [21] [21] [21] [21] ;
signed char arr_32 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 12392443755133311776ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 2052996175U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-18;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (signed char)-103;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned short)55373;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 4714938953257829445LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = 12399885073764846685ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (unsigned short)42061;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (unsigned short)53928;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 8485861810930758361ULL : 4636777091403367223ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = 16223215788644494431ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 11695742648437236806ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (signed char)-22;
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
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
