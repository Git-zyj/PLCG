#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33680;
unsigned int var_1 = 1680966183U;
unsigned int var_2 = 2013908295U;
int var_3 = 649602319;
long long int var_5 = 5406239033458882260LL;
signed char var_8 = (signed char)67;
unsigned short var_10 = (unsigned short)33083;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-10411;
long long int var_15 = -3394057192475132804LL;
unsigned int var_16 = 1595436371U;
int zero = 0;
long long int var_17 = 9061146222374677231LL;
short var_18 = (short)20906;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)8020;
unsigned char var_21 = (unsigned char)247;
long long int arr_1 [19] ;
long long int arr_2 [19] ;
short arr_3 [19] ;
unsigned long long int arr_5 [19] [19] [19] [19] ;
short arr_6 [19] [19] [19] ;
short arr_4 [19] ;
signed char arr_11 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 8630747456539523799LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -444371131734012290LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (short)24178;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 2739818368070898376ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)-14280;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (short)6977;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)-53;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
