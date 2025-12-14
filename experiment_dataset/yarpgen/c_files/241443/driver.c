#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35648;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)33847;
unsigned short var_3 = (unsigned short)24098;
unsigned int var_4 = 1856809820U;
signed char var_6 = (signed char)-120;
unsigned char var_7 = (unsigned char)153;
short var_9 = (short)19875;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)165;
_Bool var_12 = (_Bool)1;
short var_14 = (short)-6470;
long long int var_15 = 3314301512075207482LL;
unsigned int var_16 = 1328754725U;
signed char var_17 = (signed char)-94;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)165;
int zero = 0;
signed char var_20 = (signed char)78;
signed char var_21 = (signed char)-57;
long long int var_22 = 4948466758654416616LL;
signed char var_23 = (signed char)11;
long long int var_24 = 1003802247767335264LL;
short var_25 = (short)13000;
signed char var_26 = (signed char)-124;
unsigned int var_27 = 485438305U;
unsigned char var_28 = (unsigned char)164;
signed char var_29 = (signed char)-82;
short var_30 = (short)-28924;
unsigned char var_31 = (unsigned char)148;
short arr_2 [13] [13] ;
unsigned char arr_11 [13] [13] [13] [13] ;
unsigned int arr_12 [13] [13] [13] ;
_Bool arr_16 [24] ;
_Bool arr_17 [24] [24] ;
short arr_18 [24] ;
unsigned int arr_20 [18] [18] ;
short arr_21 [18] ;
unsigned char arr_15 [13] [13] [13] [13] [13] ;
unsigned int arr_19 [24] ;
unsigned int arr_22 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (short)14150;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (unsigned char)37;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 4042606025U : 1228564007U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (short)-10484 : (short)-25127;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? 996201463U : 3024062801U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_21 [i_0] = (short)2331;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (unsigned char)148 : (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 2803911025U : 3031236096U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_22 [i_0] [i_1] = (i_1 % 2 == 0) ? 2531557510U : 631909665U;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
