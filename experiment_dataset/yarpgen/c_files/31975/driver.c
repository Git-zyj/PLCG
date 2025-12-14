#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 18324735993453600998ULL;
unsigned char var_2 = (unsigned char)170;
int var_3 = -1694082447;
_Bool var_4 = (_Bool)0;
int var_5 = -794779280;
short var_6 = (short)30452;
unsigned long long int var_7 = 4435733172530998815ULL;
int var_8 = 766568139;
int zero = 0;
int var_11 = 621700063;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 14289621366201846585ULL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 7448147008075946426ULL;
unsigned long long int var_16 = 511741805595589389ULL;
unsigned char arr_0 [22] ;
int arr_1 [22] ;
int arr_3 [22] [22] ;
short arr_4 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -1470115828;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = -157123100;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-11879;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
