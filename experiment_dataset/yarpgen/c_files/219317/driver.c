#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16908288699219143956ULL;
unsigned char var_3 = (unsigned char)196;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 4705755902308279153ULL;
short var_6 = (short)17365;
unsigned char var_8 = (unsigned char)65;
unsigned int var_9 = 3881936947U;
unsigned long long int var_11 = 15687762574152429763ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)54048;
int var_13 = -1938615245;
unsigned int var_14 = 327016550U;
unsigned long long int var_15 = 14630124266285589634ULL;
signed char var_16 = (signed char)57;
unsigned long long int var_17 = 12542131138473403615ULL;
unsigned int var_18 = 3082761236U;
unsigned char var_19 = (unsigned char)69;
_Bool var_20 = (_Bool)0;
long long int arr_0 [20] [20] ;
_Bool arr_1 [20] [20] ;
_Bool arr_5 [24] ;
long long int arr_6 [24] ;
_Bool arr_7 [24] ;
int arr_8 [24] ;
unsigned short arr_9 [24] [24] ;
_Bool arr_13 [24] [24] [24] [24] ;
signed char arr_3 [20] ;
int arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = -3173158730275497955LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 7185947704000792333LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 432170411 : 1695896979;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)16220 : (unsigned short)41654;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (signed char)-109;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 1680591699;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
