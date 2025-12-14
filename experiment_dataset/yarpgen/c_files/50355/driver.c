#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12610698444634233079ULL;
unsigned long long int var_1 = 3609028715475384711ULL;
int var_4 = -1814447963;
long long int var_5 = -6544036189070261823LL;
short var_6 = (short)-2365;
unsigned long long int var_8 = 9168604619495721779ULL;
int zero = 0;
long long int var_11 = 4284392973477289777LL;
signed char var_12 = (signed char)121;
unsigned int var_13 = 1381768877U;
long long int var_14 = 1053670322324791645LL;
unsigned char var_15 = (unsigned char)20;
_Bool var_16 = (_Bool)0;
long long int var_17 = 4819737361257633940LL;
_Bool var_18 = (_Bool)0;
signed char arr_0 [20] ;
unsigned int arr_1 [20] ;
long long int arr_2 [20] ;
short arr_3 [20] ;
int arr_4 [20] [20] ;
short arr_11 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)65;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 2611134333U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 5189275252637201892LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (short)2397;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 734050010;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (short)30944;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
