#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)13;
long long int var_4 = 3121550603650720858LL;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
short var_8 = (short)26460;
unsigned char var_9 = (unsigned char)221;
unsigned int var_10 = 936501972U;
unsigned long long int var_11 = 4548151020218678442ULL;
unsigned long long int var_12 = 6255208305865513213ULL;
unsigned char var_13 = (unsigned char)139;
unsigned int var_14 = 2037247623U;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 10057404074825279586ULL;
int zero = 0;
short var_20 = (short)5193;
unsigned long long int var_21 = 14189918502055953097ULL;
unsigned long long int var_22 = 7572128308335907108ULL;
unsigned long long int arr_11 [12] [12] [12] ;
_Bool arr_12 [12] [12] [12] ;
unsigned short arr_13 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 15996999502203497735ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = (unsigned short)40224;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
