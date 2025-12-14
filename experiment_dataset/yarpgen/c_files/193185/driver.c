#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)74;
int var_2 = -2056182317;
short var_4 = (short)11748;
long long int var_7 = -2584929707219051177LL;
signed char var_8 = (signed char)28;
short var_9 = (short)3205;
short var_11 = (short)-6233;
short var_12 = (short)10181;
int zero = 0;
short var_13 = (short)32750;
unsigned short var_14 = (unsigned short)31385;
unsigned char var_15 = (unsigned char)154;
short var_16 = (short)-26238;
signed char var_17 = (signed char)6;
long long int var_18 = -947559334656096520LL;
short var_19 = (short)-4795;
short var_20 = (short)30400;
signed char var_21 = (signed char)53;
int var_22 = -1286099239;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)1;
unsigned short var_25 = (unsigned short)37984;
long long int var_26 = -7098432371994279287LL;
unsigned char var_27 = (unsigned char)167;
signed char var_28 = (signed char)-73;
signed char var_29 = (signed char)60;
_Bool var_30 = (_Bool)0;
long long int var_31 = 6332698921431787758LL;
long long int var_32 = 6405359936333805282LL;
short var_33 = (short)7725;
signed char var_34 = (signed char)105;
unsigned char arr_0 [10] ;
signed char arr_3 [10] [10] ;
short arr_4 [25] ;
signed char arr_5 [25] ;
long long int arr_6 [25] [25] ;
unsigned char arr_8 [25] ;
long long int arr_9 [25] [25] ;
signed char arr_12 [25] [25] [25] [25] ;
signed char arr_13 [25] [25] [25] [25] ;
long long int arr_17 [25] [25] [25] ;
short arr_21 [25] [25] [25] ;
unsigned short arr_23 [25] ;
unsigned char arr_26 [25] [25] ;
unsigned char arr_28 [14] ;
short arr_29 [14] ;
short arr_25 [25] [25] [25] [25] ;
short arr_36 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)15;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (short)15040;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = 406387152048673547LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = 685611387107909864LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (signed char)-87;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 797809041219005028LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (short)16898;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_23 [i_0] = (unsigned short)47159;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_26 [i_0] [i_1] = (unsigned char)180;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_28 [i_0] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_29 [i_0] = (short)-23105;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (short)5625;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_36 [i_0] [i_1] = (short)-1469;
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_36 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
