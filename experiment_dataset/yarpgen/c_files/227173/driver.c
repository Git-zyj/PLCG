#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)254;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-90;
_Bool var_3 = (_Bool)0;
short var_5 = (short)-17625;
unsigned char var_6 = (unsigned char)113;
short var_7 = (short)-30674;
short var_8 = (short)-3951;
int zero = 0;
unsigned int var_11 = 3972171095U;
unsigned int arr_0 [15] ;
short arr_1 [15] ;
unsigned int arr_2 [15] [15] [15] ;
short arr_3 [15] ;
unsigned int arr_5 [15] [15] [15] ;
short arr_6 [15] ;
unsigned char arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 188407575U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)-30757;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 3334210018U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)4392;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1206661814U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (short)18379;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (unsigned char)26;
}

void checksum() {
    hash(&seed, var_11);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
