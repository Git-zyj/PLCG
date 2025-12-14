#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)16;
unsigned int var_6 = 2796557826U;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-41;
short var_21 = (short)-12286;
unsigned int var_22 = 1393215191U;
_Bool var_23 = (_Bool)0;
unsigned int var_24 = 3251893716U;
unsigned int arr_1 [14] [14] ;
unsigned short arr_3 [14] ;
unsigned int arr_4 [14] [14] [14] ;
unsigned short arr_6 [20] ;
unsigned int arr_7 [20] [20] ;
unsigned char arr_9 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 1578624627U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)27021 : (unsigned short)61640;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 3807272890U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned short)58682;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = 2604566467U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (unsigned char)179;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
