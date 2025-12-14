#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6677;
unsigned short var_1 = (unsigned short)43410;
unsigned char var_3 = (unsigned char)234;
unsigned char var_4 = (unsigned char)171;
unsigned short var_5 = (unsigned short)51677;
unsigned short var_6 = (unsigned short)54276;
unsigned short var_7 = (unsigned short)27978;
unsigned short var_8 = (unsigned short)9576;
signed char var_11 = (signed char)118;
int zero = 0;
int var_12 = -1159879206;
int var_13 = 1566661866;
unsigned short var_14 = (unsigned short)33765;
unsigned int var_15 = 1714087728U;
unsigned char var_16 = (unsigned char)144;
unsigned short var_17 = (unsigned short)64905;
signed char var_18 = (signed char)-64;
unsigned int var_19 = 3086666688U;
unsigned short var_20 = (unsigned short)4024;
signed char var_21 = (signed char)69;
unsigned short var_22 = (unsigned short)29002;
unsigned long long int var_23 = 10992874100915679871ULL;
int var_24 = -93293885;
unsigned char var_25 = (unsigned char)180;
signed char arr_0 [18] ;
int arr_4 [13] ;
unsigned long long int arr_5 [13] ;
signed char arr_6 [13] ;
unsigned long long int arr_9 [10] ;
unsigned char arr_11 [11] ;
unsigned short arr_2 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)-67;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 1090140663;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 9567436171430529066ULL : 826749897259127940ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)85 : (signed char)29;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 17771372424715809167ULL : 7318963018049559249ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (unsigned char)124;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)61671 : (unsigned short)65044;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
