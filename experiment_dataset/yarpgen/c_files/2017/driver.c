#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3669927149U;
signed char var_1 = (signed char)-90;
signed char var_3 = (signed char)-85;
unsigned int var_4 = 3699812262U;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-97;
unsigned char var_7 = (unsigned char)213;
int var_9 = 2071076615;
signed char var_10 = (signed char)33;
_Bool var_11 = (_Bool)1;
short var_13 = (short)27684;
short var_14 = (short)30220;
int zero = 0;
unsigned int var_15 = 3374136653U;
unsigned short var_16 = (unsigned short)43993;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
int var_20 = 293082337;
unsigned short var_21 = (unsigned short)53250;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)79;
int arr_0 [10] [10] ;
signed char arr_1 [10] [10] ;
int arr_2 [10] ;
_Bool arr_5 [10] [10] [10] ;
signed char arr_6 [10] [10] [10] ;
signed char arr_7 [10] [10] [10] ;
short arr_8 [10] [10] ;
short arr_3 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 1138432209;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-79 : (signed char)115;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 1673185310;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)5 : (signed char)10;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-86;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-21532;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)30390 : (short)-12120;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
