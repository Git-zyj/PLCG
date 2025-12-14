#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 425554684880021732LL;
short var_1 = (short)20163;
unsigned short var_3 = (unsigned short)24377;
signed char var_4 = (signed char)55;
int var_6 = -267324108;
unsigned short var_7 = (unsigned short)32543;
unsigned short var_9 = (unsigned short)40650;
signed char var_10 = (signed char)-105;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-6977;
int zero = 0;
long long int var_14 = -672931196285471070LL;
long long int var_15 = -4653567651414102136LL;
long long int var_16 = -4793876056119702269LL;
signed char var_17 = (signed char)-13;
long long int var_18 = -2943267482324287078LL;
unsigned char var_19 = (unsigned char)120;
unsigned char var_20 = (unsigned char)28;
unsigned long long int var_21 = 11826238283813089466ULL;
unsigned char var_22 = (unsigned char)64;
unsigned short var_23 = (unsigned short)52801;
short var_24 = (short)9390;
short var_25 = (short)-10927;
short arr_0 [20] ;
signed char arr_1 [20] [20] ;
_Bool arr_2 [19] [19] ;
short arr_4 [19] [19] ;
short arr_8 [19] ;
short arr_9 [19] ;
unsigned long long int arr_10 [19] [19] [19] ;
unsigned int arr_14 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (short)-6601;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)103;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)16154 : (short)-26141;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)1384 : (short)22554;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (short)-29831;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 189334168231371706ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 3451703302U : 3577466439U;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
