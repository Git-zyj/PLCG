#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31324;
unsigned long long int var_1 = 15505422544042024499ULL;
unsigned long long int var_3 = 11837872722646518489ULL;
long long int var_4 = 2612593473168075995LL;
long long int var_5 = 2756097717583784844LL;
long long int var_6 = -2114732440094940378LL;
long long int var_10 = 6374677154656795158LL;
long long int var_11 = -4176005549317157242LL;
long long int var_14 = 8550131959518464993LL;
long long int var_16 = -5998442470077691511LL;
unsigned char var_17 = (unsigned char)84;
long long int var_18 = -8339155281478910997LL;
int zero = 0;
short var_19 = (short)8566;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)-2;
signed char var_23 = (signed char)-92;
int var_24 = 593559391;
signed char var_25 = (signed char)-78;
unsigned long long int var_26 = 14297089672628561654ULL;
long long int var_27 = -1292811313821023210LL;
long long int var_28 = -6547820980731077417LL;
signed char arr_0 [19] ;
_Bool arr_1 [19] ;
unsigned long long int arr_3 [19] ;
signed char arr_7 [10] [10] ;
signed char arr_8 [10] ;
short arr_9 [10] ;
unsigned long long int arr_14 [23] ;
_Bool arr_4 [19] ;
unsigned char arr_5 [19] ;
signed char arr_6 [19] ;
unsigned long long int arr_11 [10] ;
signed char arr_17 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 16556420154751157793ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (signed char)84;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (short)-27341;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = 8004787052987870709ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (signed char)-66;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = 15678125871320613985ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (signed char)50 : (signed char)-37;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
