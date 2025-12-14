#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2790492247U;
signed char var_1 = (signed char)-14;
int var_2 = 152031717;
signed char var_3 = (signed char)-69;
unsigned long long int var_4 = 14416876549469324242ULL;
int var_6 = -626947853;
short var_7 = (short)14158;
short var_8 = (short)-6820;
long long int var_9 = 5466938537245934964LL;
unsigned int var_10 = 678435840U;
signed char var_11 = (signed char)95;
int zero = 0;
signed char var_12 = (signed char)-96;
int var_13 = -1246655122;
signed char var_14 = (signed char)-115;
signed char var_15 = (signed char)15;
unsigned short var_16 = (unsigned short)48913;
unsigned long long int var_17 = 16500513443203316041ULL;
signed char var_18 = (signed char)30;
long long int var_19 = -6604302739297227733LL;
unsigned int var_20 = 4290396348U;
short var_21 = (short)-20154;
unsigned int var_22 = 3785491362U;
unsigned long long int arr_1 [11] ;
short arr_3 [13] ;
signed char arr_4 [13] ;
signed char arr_5 [17] ;
signed char arr_6 [17] ;
unsigned int arr_7 [17] [17] ;
unsigned long long int arr_2 [11] ;
short arr_8 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 14667877834936236029ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (short)-2892;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)(-127 - 1) : (signed char)57;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (signed char)-110;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (signed char)8;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = 2950136656U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 4321792707472531793ULL : 13647246405128204593ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (short)24137;
}

void checksum() {
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
