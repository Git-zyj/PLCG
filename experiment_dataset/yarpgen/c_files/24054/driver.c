#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)149;
signed char var_2 = (signed char)70;
signed char var_3 = (signed char)-116;
unsigned short var_4 = (unsigned short)18124;
unsigned short var_5 = (unsigned short)10034;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-30167;
unsigned short var_8 = (unsigned short)8602;
unsigned short var_9 = (unsigned short)64619;
signed char var_12 = (signed char)111;
signed char var_15 = (signed char)76;
int zero = 0;
short var_17 = (short)-4133;
short var_18 = (short)9416;
unsigned char var_19 = (unsigned char)173;
_Bool var_20 = (_Bool)0;
short var_21 = (short)2303;
_Bool var_22 = (_Bool)1;
short var_23 = (short)5610;
signed char var_24 = (signed char)-77;
unsigned char var_25 = (unsigned char)248;
short var_26 = (short)-11199;
short var_27 = (short)-17159;
signed char var_28 = (signed char)37;
short var_29 = (short)29977;
unsigned char arr_1 [24] [24] ;
short arr_6 [24] ;
_Bool arr_10 [24] [24] ;
short arr_11 [24] [24] ;
unsigned char arr_15 [18] ;
unsigned short arr_21 [18] [18] [18] [18] [18] ;
short arr_17 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (short)25239;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)14555 : (short)17023;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (unsigned char)8;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned short)54077 : (unsigned short)41744;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (short)-23393 : (short)-27511;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
