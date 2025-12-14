#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16903974220422753520ULL;
unsigned int var_5 = 10209165U;
unsigned long long int var_6 = 16807937172657962003ULL;
short var_7 = (short)-32668;
unsigned int var_8 = 2106414322U;
unsigned long long int var_9 = 9846043749009743383ULL;
unsigned int var_11 = 4175628399U;
unsigned long long int var_13 = 17736153045431937453ULL;
int var_14 = 278516322;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-64;
int zero = 0;
unsigned long long int var_17 = 16485112781242327955ULL;
unsigned short var_18 = (unsigned short)44007;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-1627;
unsigned short var_21 = (unsigned short)63800;
unsigned int var_22 = 3053714690U;
short var_23 = (short)-16925;
unsigned int var_24 = 833484580U;
short var_25 = (short)11765;
unsigned int var_26 = 3587637169U;
short var_27 = (short)-1219;
short var_28 = (short)928;
unsigned int var_29 = 3479646238U;
signed char arr_1 [11] ;
signed char arr_2 [11] ;
short arr_4 [11] [11] ;
short arr_5 [11] [11] [11] ;
signed char arr_8 [11] ;
unsigned char arr_10 [11] [11] [11] [11] [11] ;
unsigned char arr_13 [11] [11] [11] [11] [11] ;
unsigned char arr_15 [18] [18] ;
unsigned long long int arr_17 [18] [18] [18] ;
int arr_18 [18] ;
unsigned short arr_23 [18] [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (signed char)-118;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)80;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (short)19367;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)25492;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (signed char)-60;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)85;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 5736463357639490499ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = 2073528307;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)60856;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
