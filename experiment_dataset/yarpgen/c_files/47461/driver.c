#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)104;
unsigned long long int var_1 = 15331127430795283955ULL;
signed char var_3 = (signed char)34;
unsigned long long int var_4 = 14031427710483609288ULL;
unsigned char var_5 = (unsigned char)29;
signed char var_6 = (signed char)98;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-29326;
unsigned int var_9 = 3220584370U;
unsigned char var_10 = (unsigned char)62;
unsigned int var_11 = 50720332U;
short var_12 = (short)-29316;
int zero = 0;
_Bool var_13 = (_Bool)1;
int var_14 = -1323486130;
signed char var_15 = (signed char)52;
signed char var_16 = (signed char)1;
_Bool var_17 = (_Bool)0;
long long int var_18 = -7632531933643290010LL;
int var_19 = 649858569;
unsigned int var_20 = 1461636439U;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)19;
signed char var_23 = (signed char)78;
signed char var_24 = (signed char)89;
long long int arr_0 [13] [13] ;
unsigned int arr_1 [13] [13] ;
signed char arr_6 [10] [10] ;
int arr_7 [10] ;
long long int arr_8 [10] ;
unsigned char arr_9 [10] ;
long long int arr_3 [13] [13] ;
int arr_4 [13] ;
_Bool arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 8377845455315114306LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 1688412484U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)54;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -184605119 : -1563224802;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = -4985964157158510732LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = -308300563110298754LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = -555047068;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
