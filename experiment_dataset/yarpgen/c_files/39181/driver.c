#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 548912064U;
short var_1 = (short)13141;
short var_2 = (short)1166;
unsigned int var_9 = 3433044885U;
long long int var_10 = 4900291793627861441LL;
_Bool var_12 = (_Bool)0;
long long int var_14 = 5457606335452563497LL;
short var_17 = (short)18278;
unsigned char var_18 = (unsigned char)242;
int zero = 0;
short var_20 = (short)21259;
unsigned char var_21 = (unsigned char)203;
long long int var_22 = -3912422937984506138LL;
unsigned char var_23 = (unsigned char)78;
_Bool var_24 = (_Bool)1;
long long int arr_0 [21] ;
unsigned int arr_1 [21] ;
signed char arr_4 [21] [21] [21] [21] ;
_Bool arr_5 [21] ;
_Bool arr_6 [21] [21] ;
signed char arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 2466600299417442397LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 3237444837U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)12 : (signed char)-3;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)-78 : (signed char)-81;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
