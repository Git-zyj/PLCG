#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)93;
unsigned long long int var_1 = 18128286360513372886ULL;
signed char var_2 = (signed char)-79;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)45;
unsigned short var_6 = (unsigned short)21231;
_Bool var_7 = (_Bool)0;
int zero = 0;
signed char var_10 = (signed char)-20;
int var_11 = -1917059214;
long long int var_12 = 2714120354615266837LL;
int var_13 = 1154163058;
unsigned long long int var_14 = 13777762565304090670ULL;
signed char var_15 = (signed char)-58;
short var_16 = (short)19822;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 1742064489U;
unsigned int arr_1 [19] ;
unsigned char arr_2 [18] [18] ;
unsigned short arr_11 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 1704239183U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned short)25573 : (unsigned short)33117;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
