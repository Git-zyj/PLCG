#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7410588968739030436LL;
short var_1 = (short)-28437;
long long int var_2 = 7909432769639214247LL;
unsigned char var_3 = (unsigned char)0;
signed char var_7 = (signed char)-88;
int var_10 = -1303431070;
int var_11 = 73545020;
short var_12 = (short)677;
long long int var_13 = 4233891433573354063LL;
unsigned char var_15 = (unsigned char)26;
unsigned char var_17 = (unsigned char)199;
unsigned char var_18 = (unsigned char)230;
int zero = 0;
signed char var_20 = (signed char)-59;
int var_21 = -1308112407;
unsigned short var_22 = (unsigned short)57175;
signed char var_23 = (signed char)107;
unsigned short var_24 = (unsigned short)16062;
long long int var_25 = -7580419508789250217LL;
unsigned char var_26 = (unsigned char)88;
long long int var_27 = -6039907588745852897LL;
int var_28 = 2059932049;
unsigned char var_29 = (unsigned char)241;
short var_30 = (short)-12876;
long long int var_31 = -3093496381686822506LL;
unsigned short var_32 = (unsigned short)15005;
signed char var_33 = (signed char)-111;
short arr_2 [10] ;
signed char arr_4 [10] ;
signed char arr_8 [10] [10] [10] ;
int arr_18 [10] [10] [10] [10] ;
short arr_3 [10] ;
signed char arr_19 [10] [10] ;
unsigned char arr_20 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)-16877;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (signed char)-26;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 1918049947;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (short)8449;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_19 [i_0] [i_1] = (signed char)-16;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_20 [i_0] = (unsigned char)202;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
