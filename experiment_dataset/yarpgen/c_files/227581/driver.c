#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-79;
unsigned int var_3 = 3851086191U;
int var_5 = 1413787628;
long long int var_6 = -7098355160068410539LL;
int var_7 = 572374854;
signed char var_11 = (signed char)-56;
unsigned long long int var_12 = 8880111317391951930ULL;
unsigned char var_13 = (unsigned char)132;
int var_14 = -2041445193;
int zero = 0;
unsigned short var_15 = (unsigned short)40926;
unsigned short var_16 = (unsigned short)21766;
unsigned int var_17 = 2623716604U;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
unsigned long long int arr_0 [14] ;
signed char arr_1 [14] ;
int arr_4 [15] [15] ;
unsigned long long int arr_5 [15] ;
_Bool arr_2 [14] [14] ;
unsigned int arr_6 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2153469206353627663ULL : 14438663981944177933ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = -695547796;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 4513599866138284331ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = 3621261484U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
