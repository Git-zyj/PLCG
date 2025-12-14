#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 394930221U;
_Bool var_3 = (_Bool)1;
long long int var_4 = -1401981469120887722LL;
unsigned long long int var_7 = 10263300156985723916ULL;
unsigned long long int var_8 = 13545259526837646856ULL;
unsigned long long int var_9 = 16865733051866339869ULL;
unsigned int var_11 = 2334360548U;
unsigned long long int var_12 = 8099908098590423369ULL;
unsigned int var_14 = 4010579613U;
int zero = 0;
unsigned int var_16 = 3286751954U;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)179;
unsigned char var_19 = (unsigned char)224;
unsigned char var_20 = (unsigned char)85;
signed char arr_0 [15] [15] ;
signed char arr_1 [15] [15] ;
_Bool arr_2 [15] [15] ;
unsigned long long int arr_3 [15] [15] ;
signed char arr_4 [15] ;
unsigned long long int arr_5 [15] [15] ;
_Bool arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-119;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-43;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 5051095912446334014ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (signed char)-87;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 10013289187706575759ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
