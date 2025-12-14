#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13943190580544368117ULL;
unsigned long long int var_4 = 1830390582223768859ULL;
int var_5 = -1379845378;
long long int var_6 = -7649487678265565137LL;
signed char var_7 = (signed char)-51;
unsigned long long int var_11 = 16202769194297839446ULL;
unsigned char var_12 = (unsigned char)247;
unsigned int var_13 = 332356777U;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
unsigned long long int var_17 = 17191512530016777762ULL;
int zero = 0;
unsigned long long int var_18 = 10219048357820665971ULL;
unsigned char var_19 = (unsigned char)212;
short var_20 = (short)-31780;
int var_21 = 709027760;
unsigned long long int arr_3 [18] [18] ;
_Bool arr_4 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 1861676599351359680ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
