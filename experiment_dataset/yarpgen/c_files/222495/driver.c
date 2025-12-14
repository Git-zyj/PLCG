#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2033743181025357833ULL;
long long int var_1 = -5542288093103179770LL;
unsigned short var_2 = (unsigned short)41809;
_Bool var_8 = (_Bool)0;
int var_11 = -2066314211;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)49679;
unsigned int var_18 = 2765613799U;
unsigned long long int var_19 = 5667581667377003833ULL;
unsigned long long int var_20 = 11830697232585162537ULL;
unsigned long long int var_21 = 6863506703350270679ULL;
unsigned long long int arr_0 [15] ;
signed char arr_1 [15] ;
long long int arr_2 [15] [15] [15] ;
signed char arr_6 [20] ;
unsigned char arr_7 [20] ;
_Bool arr_5 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 4736983879902836097ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)50;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -8362272722214927519LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (signed char)-100;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
