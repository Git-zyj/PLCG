#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15946441457393160167ULL;
unsigned short var_4 = (unsigned short)55735;
int var_6 = -73478167;
int var_7 = 1541318420;
_Bool var_9 = (_Bool)1;
signed char var_12 = (signed char)-36;
signed char var_13 = (signed char)-76;
unsigned int var_16 = 2392993827U;
signed char var_17 = (signed char)-53;
int zero = 0;
long long int var_18 = 6833703778078105761LL;
long long int var_19 = 3181054595646790503LL;
signed char var_20 = (signed char)90;
int var_21 = -1813769994;
unsigned char var_22 = (unsigned char)120;
signed char var_23 = (signed char)-89;
long long int arr_0 [18] ;
unsigned char arr_3 [18] [18] [18] ;
unsigned int arr_4 [18] [18] ;
long long int arr_5 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 5757493822411919916LL : 4141909486911447999LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)217 : (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 3120423335U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? -7756965861507568581LL : 4697548898731966016LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
