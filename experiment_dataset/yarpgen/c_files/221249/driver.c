#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30280;
_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)56;
long long int var_4 = 6364739249537329010LL;
signed char var_5 = (signed char)-20;
long long int var_6 = -2961695260897871650LL;
signed char var_7 = (signed char)7;
short var_8 = (short)30092;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)-104;
long long int var_12 = -2320143425160802256LL;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 15357675343359898605ULL;
unsigned long long int var_15 = 408863440862223276ULL;
signed char var_16 = (signed char)-69;
unsigned int arr_0 [23] [23] ;
_Bool arr_3 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 3555008113U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
