#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27455;
unsigned short var_1 = (unsigned short)55195;
long long int var_3 = 5084191290505996174LL;
unsigned int var_4 = 2876472248U;
long long int var_6 = 1319437157952539872LL;
long long int var_7 = 1696026456891820404LL;
short var_8 = (short)28788;
short var_9 = (short)-13832;
short var_12 = (short)1094;
unsigned short var_13 = (unsigned short)38761;
unsigned long long int var_14 = 17206457640696150903ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)92;
unsigned int var_17 = 2615583975U;
_Bool var_18 = (_Bool)0;
long long int var_19 = 669190523684936299LL;
long long int var_20 = 1385018553833226798LL;
unsigned int var_21 = 1961362309U;
signed char var_22 = (signed char)-125;
short var_23 = (short)-11511;
_Bool var_24 = (_Bool)1;
unsigned short var_25 = (unsigned short)17242;
signed char var_26 = (signed char)-44;
short var_27 = (short)13620;
signed char var_28 = (signed char)-69;
unsigned long long int var_29 = 13787692253315229673ULL;
_Bool var_30 = (_Bool)0;
unsigned char var_31 = (unsigned char)84;
long long int var_32 = -6888617368392030161LL;
unsigned short var_33 = (unsigned short)61424;
unsigned short var_34 = (unsigned short)14972;
unsigned char var_35 = (unsigned char)168;
unsigned long long int var_36 = 10658670710646647816ULL;
signed char var_37 = (signed char)-1;
short var_38 = (short)11350;
unsigned long long int var_39 = 13931236555518679482ULL;
long long int var_40 = 2382703268385716173LL;
long long int var_41 = 2225239353061958754LL;
unsigned int var_42 = 1719878943U;
_Bool var_43 = (_Bool)1;
_Bool var_44 = (_Bool)0;
unsigned short var_45 = (unsigned short)11342;
unsigned int var_46 = 2164141144U;
long long int var_47 = -674323578789703290LL;
int var_48 = -2091676509;
unsigned short var_49 = (unsigned short)64203;
signed char var_50 = (signed char)92;
signed char var_51 = (signed char)-75;
unsigned int arr_0 [10] ;
_Bool arr_1 [10] [10] ;
long long int arr_4 [19] [19] ;
unsigned short arr_5 [19] [19] ;
long long int arr_6 [19] [19] ;
_Bool arr_7 [19] ;
unsigned short arr_10 [19] [19] [19] [19] ;
short arr_12 [19] [19] [19] ;
unsigned short arr_13 [19] [19] [19] [19] ;
unsigned long long int arr_15 [19] ;
unsigned int arr_16 [19] [19] [19] [19] ;
long long int arr_19 [19] [19] [19] [19] [19] ;
unsigned char arr_20 [19] [19] [19] ;
unsigned short arr_21 [13] [13] ;
signed char arr_22 [13] ;
unsigned short arr_27 [12] ;
short arr_31 [12] [12] [12] [12] ;
int arr_33 [12] [12] ;
unsigned short arr_45 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 571374565U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = -1728744843139692307LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)28602;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = 251268203533508967LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned short)18496;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (short)18643;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned short)14517;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 16068705791968263292ULL : 14020259747120388743ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1119269647U : 2307080639U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? -7600393410730244707LL : -8917927613898157696LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)96 : (unsigned char)166;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)16007 : (unsigned short)38533;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_22 [i_0] = (signed char)103;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_27 [i_0] = (unsigned short)20188;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (short)-16328;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_33 [i_0] [i_1] = 1782878930;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_45 [i_0] = (unsigned short)61767;
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
