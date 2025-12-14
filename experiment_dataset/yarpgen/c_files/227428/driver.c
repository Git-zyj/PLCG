#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6274443573635383896LL;
unsigned char var_1 = (unsigned char)26;
int var_2 = -855928985;
unsigned long long int var_6 = 11810814885908775001ULL;
unsigned int var_7 = 2769563932U;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 137045656U;
int var_12 = -1076362857;
int var_13 = -1514361846;
int zero = 0;
unsigned char var_14 = (unsigned char)10;
unsigned long long int var_15 = 10231579647806073263ULL;
short var_16 = (short)28047;
unsigned int var_17 = 2874127739U;
unsigned long long int var_18 = 7467865831109466744ULL;
_Bool var_19 = (_Bool)1;
long long int var_20 = -2748415763770977761LL;
signed char var_21 = (signed char)23;
unsigned short var_22 = (unsigned short)9998;
signed char var_23 = (signed char)-61;
unsigned char var_24 = (unsigned char)179;
long long int var_25 = 8454814624946537972LL;
unsigned int var_26 = 174964168U;
unsigned char var_27 = (unsigned char)113;
unsigned int var_28 = 1802464333U;
unsigned char var_29 = (unsigned char)109;
int var_30 = -1338709150;
unsigned long long int var_31 = 13053383377916201383ULL;
unsigned short var_32 = (unsigned short)15766;
int arr_4 [22] ;
long long int arr_5 [22] ;
unsigned short arr_6 [22] ;
signed char arr_9 [22] ;
int arr_13 [22] [22] [22] [22] ;
unsigned int arr_18 [22] [22] [22] [22] [22] ;
int arr_22 [22] [22] [22] [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 59444842;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = -8543660414069812248LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (unsigned short)42376;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (signed char)98;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 1908711883;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 1702189938U : 2890390096U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 504222432;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
