#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)55;
long long int var_2 = 232332356189375189LL;
unsigned int var_4 = 2693303591U;
unsigned short var_6 = (unsigned short)33249;
int var_8 = 1509541494;
_Bool var_9 = (_Bool)0;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 5309092874569843581ULL;
unsigned short var_17 = (unsigned short)19153;
unsigned long long int var_18 = 11735164747459928092ULL;
signed char var_19 = (signed char)119;
unsigned short var_20 = (unsigned short)28329;
short var_21 = (short)11890;
long long int var_22 = -2963686812167905139LL;
unsigned long long int var_23 = 17522552868861931489ULL;
unsigned short var_24 = (unsigned short)14495;
unsigned short var_25 = (unsigned short)36333;
unsigned char var_26 = (unsigned char)72;
short arr_0 [24] ;
unsigned char arr_1 [24] ;
unsigned char arr_7 [24] [24] [24] ;
unsigned long long int arr_9 [24] [24] [24] [24] [24] ;
long long int arr_10 [24] [24] [24] [24] ;
unsigned long long int arr_13 [23] ;
unsigned long long int arr_21 [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)-25390;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)123;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 8516924256308622093ULL : 4016386383755405970ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 9002070155237805918LL : -2279862860277449522LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = 8887747343688188752ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = 14092964427150551042ULL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
