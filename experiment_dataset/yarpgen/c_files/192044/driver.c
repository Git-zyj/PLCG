#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -580625574430551632LL;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
signed char var_7 = (signed char)67;
unsigned long long int var_8 = 10497446711383699843ULL;
unsigned char var_9 = (unsigned char)232;
unsigned char var_12 = (unsigned char)59;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 9956705205559399457ULL;
int var_17 = 1143108988;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)84;
long long int var_21 = 712362966369952100LL;
_Bool var_22 = (_Bool)0;
long long int arr_0 [19] ;
short arr_1 [19] ;
_Bool arr_3 [19] ;
_Bool arr_7 [19] [19] [19] ;
unsigned char arr_9 [19] [19] [19] [19] [19] ;
_Bool arr_12 [19] [19] ;
short arr_13 [19] [19] ;
unsigned long long int arr_17 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = -6338498405662255629LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)22839;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned char)23 : (unsigned char)54;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_13 [i_0] [i_1] = (short)27025;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 7530715993327909296ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
