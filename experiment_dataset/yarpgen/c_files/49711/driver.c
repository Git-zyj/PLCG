#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1612017781;
int var_5 = 838835399;
unsigned int var_6 = 956515154U;
unsigned int var_7 = 3598947196U;
unsigned short var_8 = (unsigned short)22068;
int zero = 0;
signed char var_10 = (signed char)-16;
signed char var_11 = (signed char)104;
unsigned char arr_0 [24] ;
signed char arr_1 [24] ;
signed char arr_2 [24] ;
unsigned char arr_3 [24] ;
signed char arr_4 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)140;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)-53;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (signed char)21;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)101;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
