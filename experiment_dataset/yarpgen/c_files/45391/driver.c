#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)60;
_Bool var_8 = (_Bool)1;
long long int var_9 = 6572187298709549074LL;
signed char var_10 = (signed char)108;
unsigned long long int var_11 = 16768581030701925067ULL;
unsigned char var_12 = (unsigned char)129;
signed char var_13 = (signed char)18;
int zero = 0;
int var_15 = 844802627;
unsigned char var_16 = (unsigned char)225;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 201472810U;
int var_20 = 358510195;
unsigned char var_21 = (unsigned char)235;
unsigned long long int arr_5 [24] [24] [24] ;
unsigned int arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 9598778511467810549ULL : 8101620343670676416ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 2797593804U : 3630723931U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
