#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)58;
signed char var_5 = (signed char)-115;
unsigned int var_14 = 214506106U;
unsigned long long int var_16 = 4253759694372408664ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
short var_21 = (short)10943;
signed char var_22 = (signed char)75;
unsigned int var_23 = 3584855683U;
unsigned short var_24 = (unsigned short)50938;
unsigned long long int var_25 = 5023162650944323400ULL;
unsigned long long int arr_2 [10] ;
_Bool arr_3 [10] [10] ;
int arr_4 [16] [16] ;
_Bool arr_5 [16] [16] ;
short arr_8 [13] ;
unsigned char arr_9 [13] ;
_Bool arr_10 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 16008844189615798921ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 1117851930;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (short)28979;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
