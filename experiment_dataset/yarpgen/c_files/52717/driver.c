#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)106;
long long int var_1 = 8577246968878395815LL;
unsigned int var_4 = 575264654U;
short var_7 = (short)17593;
unsigned short var_14 = (unsigned short)14733;
int var_15 = 923846290;
int zero = 0;
int var_18 = -833903994;
unsigned short var_19 = (unsigned short)44767;
long long int var_20 = 8596888114263928458LL;
_Bool var_21 = (_Bool)0;
short arr_0 [22] [22] ;
_Bool arr_1 [22] ;
long long int arr_2 [22] [22] ;
unsigned int arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (short)22300;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = -5104306749176948667LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 1795741214U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
