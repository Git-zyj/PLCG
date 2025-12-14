#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)34;
unsigned short var_2 = (unsigned short)3519;
long long int var_4 = -8023251826046335522LL;
unsigned short var_5 = (unsigned short)40337;
long long int var_8 = -7715099918283535083LL;
long long int var_9 = 1939447319071971734LL;
long long int var_10 = 208030903878011211LL;
unsigned char var_12 = (unsigned char)219;
int zero = 0;
long long int var_13 = 7540389817212527913LL;
unsigned char var_14 = (unsigned char)117;
signed char var_15 = (signed char)-56;
long long int var_16 = -8749177478236654861LL;
long long int var_17 = 1917038164276781317LL;
signed char var_18 = (signed char)-61;
_Bool var_19 = (_Bool)0;
unsigned char arr_0 [10] [10] ;
_Bool arr_1 [10] ;
long long int arr_3 [10] ;
signed char arr_4 [10] [10] ;
unsigned char arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 277465364086707694LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-112;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned char)58;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
