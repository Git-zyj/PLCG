#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-94;
long long int var_6 = -538909662580983684LL;
_Bool var_7 = (_Bool)0;
long long int var_8 = -282202085338490577LL;
unsigned long long int var_14 = 10606895553261074382ULL;
int var_15 = -615557499;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
long long int var_19 = -604166901085291067LL;
int zero = 0;
long long int var_20 = 739924111214453866LL;
signed char var_21 = (signed char)10;
long long int var_22 = -7094936743250672020LL;
int var_23 = 1953320644;
int var_24 = 424810076;
long long int var_25 = 3536971746999829092LL;
unsigned int var_26 = 1528332214U;
long long int var_27 = -5694570221983929985LL;
int var_28 = 637006281;
long long int var_29 = -6858515725263200242LL;
unsigned char var_30 = (unsigned char)92;
_Bool arr_0 [12] [12] ;
unsigned char arr_1 [12] ;
int arr_2 [12] ;
short arr_3 [10] [10] ;
_Bool arr_5 [10] ;
unsigned char arr_6 [10] ;
long long int arr_9 [17] ;
unsigned int arr_7 [10] ;
unsigned char arr_10 [17] [17] ;
unsigned char arr_11 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -2125753565;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-14288;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = 1589512484739054217LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 540820752U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (unsigned char)114;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
