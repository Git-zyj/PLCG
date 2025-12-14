#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23233;
long long int var_1 = -2357243153791368153LL;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)1;
int var_7 = -1978035710;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 8117049210020463885ULL;
short var_13 = (short)17955;
_Bool var_15 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-9053;
short var_18 = (short)-29394;
int var_19 = 492977324;
unsigned short var_20 = (unsigned short)63715;
signed char var_21 = (signed char)-108;
unsigned long long int var_22 = 10350413446094816963ULL;
unsigned char var_23 = (unsigned char)4;
int var_24 = -2003756879;
unsigned short var_25 = (unsigned short)49152;
int var_26 = -1312762077;
unsigned int var_27 = 57546286U;
unsigned char var_28 = (unsigned char)90;
_Bool var_29 = (_Bool)0;
unsigned short arr_1 [19] [19] ;
unsigned long long int arr_2 [19] ;
unsigned int arr_5 [19] ;
long long int arr_8 [19] [19] ;
signed char arr_9 [19] [19] [19] [19] ;
signed char arr_13 [19] ;
unsigned int arr_16 [18] [18] ;
unsigned short arr_22 [18] [18] ;
unsigned int arr_26 [18] ;
unsigned char arr_15 [19] [19] [19] [19] [19] ;
unsigned long long int arr_20 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)22164;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 1996158004108100736ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 3813234811U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = -6050308175643454987LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (signed char)14;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_16 [i_0] [i_1] = 1826793040U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_22 [i_0] [i_1] = (unsigned short)47190;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_26 [i_0] = 4214761909U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = 9951877408777842651ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
