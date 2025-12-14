#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51269;
signed char var_2 = (signed char)57;
signed char var_4 = (signed char)-61;
unsigned char var_5 = (unsigned char)101;
unsigned long long int var_12 = 9534962473973335747ULL;
unsigned char var_16 = (unsigned char)222;
int zero = 0;
long long int var_19 = 6097009952056829176LL;
long long int var_20 = -2494039769611163929LL;
unsigned int var_21 = 3958187496U;
signed char var_22 = (signed char)-7;
unsigned char var_23 = (unsigned char)107;
long long int arr_1 [12] [12] ;
_Bool arr_2 [12] ;
unsigned int arr_6 [12] [12] [12] ;
signed char arr_7 [12] ;
unsigned long long int arr_8 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 4960991804409469746LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 3932127908U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (signed char)115;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = 15340383105865955537ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
