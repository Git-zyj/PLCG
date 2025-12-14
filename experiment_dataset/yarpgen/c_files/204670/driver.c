#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12368387667216705415ULL;
_Bool var_2 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned int var_14 = 1623632179U;
unsigned short var_15 = (unsigned short)32935;
long long int var_16 = 1945953555171159234LL;
_Bool var_17 = (_Bool)0;
signed char var_19 = (signed char)-78;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = 693222085;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)49740;
unsigned long long int var_24 = 14148331218157627199ULL;
unsigned long long int var_25 = 12002505033918043104ULL;
unsigned long long int var_26 = 4911819846061315636ULL;
unsigned long long int var_27 = 949617128531992179ULL;
_Bool var_28 = (_Bool)0;
unsigned char arr_1 [11] ;
signed char arr_5 [11] [11] ;
_Bool arr_6 [11] [11] ;
_Bool arr_2 [11] [11] ;
_Bool arr_8 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)53;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
