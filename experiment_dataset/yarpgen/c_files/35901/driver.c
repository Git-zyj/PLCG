#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)10;
signed char var_1 = (signed char)23;
unsigned short var_3 = (unsigned short)65280;
signed char var_6 = (signed char)72;
unsigned char var_8 = (unsigned char)35;
unsigned int var_9 = 3140082246U;
signed char var_11 = (signed char)-71;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)-99;
signed char var_15 = (signed char)-96;
unsigned int var_16 = 3023332334U;
signed char var_17 = (signed char)30;
signed char var_18 = (signed char)-10;
signed char var_19 = (signed char)17;
signed char var_20 = (signed char)41;
signed char var_21 = (signed char)49;
signed char var_22 = (signed char)-101;
unsigned short var_23 = (unsigned short)48884;
signed char var_24 = (signed char)-115;
int var_25 = 1228710415;
signed char var_26 = (signed char)73;
signed char var_27 = (signed char)10;
signed char var_28 = (signed char)28;
unsigned char var_29 = (unsigned char)184;
_Bool arr_0 [21] [21] ;
int arr_1 [21] ;
unsigned int arr_5 [21] [21] [21] ;
int arr_7 [21] ;
signed char arr_11 [17] ;
signed char arr_22 [14] [14] ;
unsigned int arr_23 [14] ;
signed char arr_16 [17] ;
signed char arr_20 [14] ;
unsigned short arr_26 [14] [14] [14] ;
unsigned int arr_30 [14] ;
signed char arr_34 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 102955821;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 182165165U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = -698966345;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_22 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)98 : (signed char)-23;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_23 [i_0] = 3233088183U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (signed char)122;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_20 [i_0] = (signed char)78;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (unsigned short)11649;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_30 [i_0] = 1059037475U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_34 [i_0] [i_1] = (signed char)-108;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
