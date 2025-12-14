#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9195;
unsigned char var_2 = (unsigned char)55;
short var_5 = (short)-4042;
unsigned char var_6 = (unsigned char)248;
int var_9 = -1782019562;
int var_10 = 1465079223;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 907471181U;
short var_17 = (short)-7049;
long long int var_18 = 2832404242635329258LL;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)28730;
unsigned char var_21 = (unsigned char)35;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-24487;
unsigned short var_24 = (unsigned short)42133;
long long int var_25 = 5138371959580993967LL;
short var_26 = (short)10251;
_Bool var_27 = (_Bool)0;
_Bool var_28 = (_Bool)0;
_Bool var_29 = (_Bool)1;
unsigned char var_30 = (unsigned char)175;
unsigned short var_31 = (unsigned short)64281;
long long int var_32 = -5869610608872781377LL;
int var_33 = 1895186378;
int var_34 = -819046157;
unsigned char var_35 = (unsigned char)243;
_Bool var_36 = (_Bool)1;
unsigned short var_37 = (unsigned short)54775;
short arr_0 [17] ;
_Bool arr_1 [17] ;
unsigned long long int arr_2 [17] ;
unsigned int arr_4 [23] ;
unsigned short arr_6 [13] [13] ;
short arr_9 [13] [13] [13] ;
signed char arr_10 [13] [13] [13] ;
unsigned short arr_11 [13] [13] [13] [13] ;
unsigned char arr_15 [13] [13] [13] [13] ;
unsigned char arr_17 [13] [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (short)-6284;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 7135744852892857853ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 1141209312U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)54111;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)-4927;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)-27;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (unsigned short)55623;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned char)230 : (unsigned char)28;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
