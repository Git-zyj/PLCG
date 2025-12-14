#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4037353733157502258ULL;
signed char var_2 = (signed char)-24;
unsigned char var_3 = (unsigned char)249;
_Bool var_4 = (_Bool)1;
long long int var_5 = -909228740261748918LL;
int var_7 = 814113157;
unsigned char var_8 = (unsigned char)141;
unsigned int var_10 = 2714276640U;
unsigned int var_11 = 3423550413U;
short var_12 = (short)536;
int var_13 = -1128203703;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)184;
long long int var_16 = -4722778246142180399LL;
long long int var_19 = 909972030991290928LL;
int zero = 0;
unsigned char var_20 = (unsigned char)68;
unsigned char var_21 = (unsigned char)56;
unsigned short var_22 = (unsigned short)1300;
short var_23 = (short)19354;
short var_24 = (short)-27563;
long long int var_25 = 1349813304866516302LL;
unsigned long long int var_26 = 5414507836021297749ULL;
unsigned int arr_3 [18] [18] ;
unsigned short arr_8 [18] [18] [18] [18] ;
_Bool arr_10 [13] ;
signed char arr_9 [18] [18] [18] [18] ;
long long int arr_16 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 726841280U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned short)57230;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)-13 : (signed char)32;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1108237005110261252LL : 8596352564418891169LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
