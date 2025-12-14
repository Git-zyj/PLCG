#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 1215150208880692723ULL;
_Bool var_2 = (_Bool)1;
int var_3 = -468801739;
unsigned long long int var_5 = 4141562237577995212ULL;
_Bool var_6 = (_Bool)0;
unsigned short var_11 = (unsigned short)18411;
int zero = 0;
int var_13 = -857876216;
unsigned char var_14 = (unsigned char)122;
unsigned long long int var_15 = 7070773233935486999ULL;
unsigned short var_16 = (unsigned short)48225;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)48;
unsigned long long int var_19 = 13022493735298803989ULL;
_Bool arr_1 [13] ;
int arr_3 [24] ;
int arr_4 [24] [24] ;
unsigned short arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = -959141384;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 1712499916;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned short)28549;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
