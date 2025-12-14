#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -84385428;
int var_2 = -961550824;
unsigned long long int var_3 = 4561921216792085139ULL;
int var_5 = 264109774;
unsigned int var_10 = 222171246U;
long long int var_12 = 5553220729841551889LL;
unsigned long long int var_13 = 5655232607495233143ULL;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)57161;
int zero = 0;
unsigned long long int var_19 = 10525501703353252191ULL;
short var_20 = (short)-17878;
unsigned char var_21 = (unsigned char)188;
int var_22 = 2041983158;
unsigned long long int var_23 = 11983786477771431435ULL;
unsigned char var_24 = (unsigned char)124;
unsigned char var_25 = (unsigned char)3;
unsigned char var_26 = (unsigned char)212;
int var_27 = 1231213284;
unsigned char var_28 = (unsigned char)191;
long long int var_29 = 3716529690196022070LL;
int arr_2 [19] [19] ;
signed char arr_4 [19] [19] [19] ;
unsigned long long int arr_9 [19] [19] [19] [19] ;
short arr_10 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 602709957;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)52;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 12326512250297198478ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (short)-3861;
}

void checksum() {
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
