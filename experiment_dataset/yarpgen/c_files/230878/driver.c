#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)148;
long long int var_3 = 5196237608523295210LL;
unsigned short var_5 = (unsigned short)64877;
signed char var_6 = (signed char)-57;
long long int var_7 = -840104896441736523LL;
unsigned int var_8 = 1220166553U;
int var_10 = -3203480;
signed char var_11 = (signed char)-59;
unsigned char var_12 = (unsigned char)88;
unsigned int var_13 = 258663079U;
signed char var_14 = (signed char)-72;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned char var_18 = (unsigned char)141;
long long int var_19 = -6840554639449458919LL;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)14;
unsigned char var_23 = (unsigned char)48;
unsigned long long int var_24 = 12038007314344635857ULL;
_Bool var_25 = (_Bool)0;
unsigned int var_26 = 224716852U;
unsigned char var_27 = (unsigned char)11;
signed char arr_0 [14] ;
signed char arr_1 [14] [14] ;
unsigned char arr_4 [14] [14] ;
unsigned int arr_5 [14] [14] [14] [14] ;
unsigned long long int arr_6 [14] [14] ;
short arr_10 [14] [14] [14] [14] ;
unsigned short arr_2 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (signed char)87;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 1463722023U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = 15522045272042339179ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (short)24236;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)32009;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
