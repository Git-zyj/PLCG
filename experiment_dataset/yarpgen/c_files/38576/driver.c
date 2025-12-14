#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-20;
signed char var_1 = (signed char)-126;
signed char var_3 = (signed char)17;
unsigned long long int var_4 = 9096175160138360673ULL;
unsigned char var_6 = (unsigned char)181;
signed char var_7 = (signed char)-2;
signed char var_8 = (signed char)100;
signed char var_11 = (signed char)119;
unsigned long long int var_13 = 10719019869375005648ULL;
long long int var_14 = -6201210787284333203LL;
signed char var_16 = (signed char)-85;
signed char var_17 = (signed char)-87;
long long int var_18 = -7577608318149265048LL;
int zero = 0;
unsigned long long int var_20 = 340547252796901970ULL;
signed char var_21 = (signed char)-24;
signed char var_22 = (signed char)6;
signed char var_23 = (signed char)-94;
long long int var_24 = 3466499659064693797LL;
signed char var_25 = (signed char)108;
signed char var_26 = (signed char)5;
unsigned char var_27 = (unsigned char)105;
unsigned long long int var_28 = 12972943433115555148ULL;
signed char var_29 = (signed char)-76;
signed char var_30 = (signed char)68;
long long int var_31 = -4743028676843074342LL;
unsigned char var_32 = (unsigned char)23;
unsigned char arr_0 [22] ;
unsigned char arr_1 [22] ;
signed char arr_4 [23] ;
long long int arr_5 [23] ;
signed char arr_6 [23] [23] [23] ;
unsigned char arr_7 [23] [23] [23] ;
long long int arr_8 [23] [23] [23] ;
unsigned char arr_18 [23] [23] [23] [23] [23] [23] ;
unsigned char arr_20 [23] [23] [23] [23] [23] [23] ;
unsigned char arr_21 [23] [23] [23] [23] [23] [23] [23] ;
unsigned long long int arr_22 [23] ;
unsigned long long int arr_23 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)213 : (unsigned char)109;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (signed char)52;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = -8137164469057390629LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-103;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 1880754732467276622LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_22 [i_0] = 12137302792456784315ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_23 [i_0] = 15933771306919343520ULL;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
