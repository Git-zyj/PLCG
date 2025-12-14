#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22865;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)32;
unsigned short var_3 = (unsigned short)43426;
_Bool var_5 = (_Bool)1;
long long int var_6 = 6106538867426369624LL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 18282808825235709442ULL;
int var_9 = 1809771991;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned short var_11 = (unsigned short)3234;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)183;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2398478451U;
signed char var_18 = (signed char)-33;
unsigned int var_19 = 749530715U;
unsigned char var_20 = (unsigned char)48;
unsigned int var_21 = 243284944U;
_Bool var_22 = (_Bool)1;
long long int var_23 = 6828764102173880991LL;
unsigned short var_24 = (unsigned short)54843;
signed char var_25 = (signed char)0;
long long int var_26 = -8667066418000661381LL;
_Bool var_27 = (_Bool)1;
int arr_0 [15] ;
_Bool arr_1 [15] ;
_Bool arr_2 [15] [15] ;
unsigned char arr_3 [15] ;
_Bool arr_5 [15] [15] [15] ;
unsigned short arr_6 [15] [15] [15] ;
long long int arr_7 [15] [15] ;
unsigned char arr_8 [15] [15] [15] ;
long long int arr_10 [15] ;
int arr_12 [15] [15] ;
unsigned long long int arr_19 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -853946823;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)33 : (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)6513 : (unsigned short)61003;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? -8622142064266814302LL : -1921733031701282139LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)27 : (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = 2732581172336323438LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = 91842662;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 8372492294482352647ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
