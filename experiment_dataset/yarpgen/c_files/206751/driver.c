#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)12396;
short var_6 = (short)25888;
unsigned char var_7 = (unsigned char)54;
long long int var_10 = 3406098248046345617LL;
long long int var_13 = 8031840202331646247LL;
_Bool var_14 = (_Bool)1;
short var_17 = (short)-18422;
short var_18 = (short)3462;
int zero = 0;
signed char var_20 = (signed char)-76;
signed char var_21 = (signed char)40;
unsigned short var_22 = (unsigned short)59471;
long long int var_23 = 134243880322859487LL;
long long int var_24 = -3188898074072026244LL;
_Bool var_25 = (_Bool)0;
unsigned int arr_0 [12] ;
_Bool arr_3 [12] ;
unsigned int arr_5 [12] ;
unsigned short arr_8 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 3906224974U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 3995953643U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)45545 : (unsigned short)58378;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
