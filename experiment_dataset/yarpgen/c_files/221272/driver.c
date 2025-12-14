#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)79;
short var_2 = (short)-21330;
_Bool var_4 = (_Bool)1;
long long int var_7 = 4301823688887253055LL;
unsigned short var_8 = (unsigned short)28020;
unsigned short var_9 = (unsigned short)32884;
unsigned int var_11 = 2355483157U;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)55;
unsigned int var_14 = 3543058406U;
_Bool var_15 = (_Bool)1;
int var_16 = -595480149;
unsigned short var_17 = (unsigned short)60734;
long long int var_18 = -2033070349515784062LL;
signed char var_19 = (signed char)-66;
unsigned int var_20 = 3661735182U;
int var_21 = 2107788465;
unsigned char var_22 = (unsigned char)210;
long long int arr_0 [12] ;
unsigned char arr_1 [12] [12] ;
unsigned short arr_2 [12] ;
unsigned short arr_3 [12] ;
unsigned short arr_4 [12] ;
short arr_10 [12] [12] ;
signed char arr_7 [12] ;
short arr_8 [12] ;
unsigned long long int arr_9 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 271967257474697829LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)185;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)5234;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)12307;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned short)38212;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (short)9697;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (signed char)7;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (short)26315;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = 11001677772067025508ULL;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
