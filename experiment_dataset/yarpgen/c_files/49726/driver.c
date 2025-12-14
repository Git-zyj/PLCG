#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3107303812U;
unsigned short var_1 = (unsigned short)9236;
unsigned char var_2 = (unsigned char)66;
unsigned char var_4 = (unsigned char)201;
unsigned long long int var_8 = 8361048668713480800ULL;
unsigned char var_9 = (unsigned char)136;
signed char var_10 = (signed char)27;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 2362830876U;
signed char var_16 = (signed char)89;
unsigned short var_17 = (unsigned short)1637;
unsigned long long int var_18 = 5926427524018626952ULL;
unsigned short arr_0 [13] ;
unsigned long long int arr_1 [13] ;
signed char arr_5 [13] ;
unsigned long long int arr_2 [13] ;
unsigned char arr_3 [13] ;
unsigned int arr_6 [13] ;
int arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)16938 : (unsigned short)14312;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 12220889718405845061ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)-41 : (signed char)98;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 4116450612647101583ULL : 12950805141492297014ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)94 : (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1612681996U : 3092841967U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1734319509 : -1589123190;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
