#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2422480839U;
unsigned int var_5 = 2644000374U;
unsigned char var_10 = (unsigned char)206;
unsigned int var_12 = 1209379353U;
int zero = 0;
unsigned char var_16 = (unsigned char)242;
unsigned long long int var_17 = 15911538993685466504ULL;
long long int var_18 = 7737404292373931940LL;
long long int var_19 = 6932113170482529240LL;
unsigned char var_20 = (unsigned char)234;
unsigned char var_21 = (unsigned char)224;
short var_22 = (short)31339;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)99;
unsigned char var_25 = (unsigned char)2;
unsigned long long int var_26 = 9958310914338972758ULL;
signed char var_27 = (signed char)95;
short arr_1 [21] ;
unsigned char arr_6 [21] [21] ;
short arr_10 [21] [21] [21] [21] [21] ;
unsigned int arr_12 [22] [22] ;
unsigned long long int arr_15 [23] ;
short arr_14 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)11132;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-31725;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = 1201381325U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = 4574898323841228277ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_14 [i_0] [i_1] = (short)-14306;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
