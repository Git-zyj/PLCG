#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 6183666896548676534ULL;
unsigned long long int var_8 = 5593394248095014042ULL;
unsigned long long int var_9 = 12789536612372289487ULL;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)105;
long long int var_13 = -5368168501550405958LL;
unsigned int var_14 = 3148707504U;
int var_15 = -853037655;
unsigned long long int var_16 = 12326366355348211231ULL;
signed char var_17 = (signed char)-90;
int zero = 0;
unsigned long long int var_18 = 1004806685111085791ULL;
long long int var_19 = 8657754924250372943LL;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 4498816674828454425ULL;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 147129658U;
unsigned long long int var_24 = 14615630993353147790ULL;
_Bool var_25 = (_Bool)0;
unsigned char var_26 = (unsigned char)203;
unsigned int var_27 = 751702564U;
unsigned long long int arr_0 [10] [10] ;
_Bool arr_2 [10] ;
long long int arr_4 [10] ;
int arr_5 [10] ;
unsigned int arr_7 [10] ;
unsigned char arr_9 [10] [10] ;
_Bool arr_12 [10] ;
signed char arr_13 [10] [10] ;
unsigned char arr_14 [10] [10] ;
signed char arr_3 [10] ;
int arr_8 [10] ;
unsigned int arr_16 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 9953942294327659822ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = -485610905551898145LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 1813875266;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 807609997U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)62;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)-55;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)85;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (signed char)93;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = -1837855176;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = 2885322294U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
