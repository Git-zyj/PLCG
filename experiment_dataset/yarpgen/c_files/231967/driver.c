#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-24;
long long int var_6 = 1451549785320064702LL;
int var_10 = -2061363620;
unsigned short var_11 = (unsigned short)19811;
unsigned short var_18 = (unsigned short)42980;
int zero = 0;
signed char var_20 = (signed char)-110;
long long int var_21 = -7227107517782297721LL;
unsigned short var_22 = (unsigned short)20209;
unsigned short var_23 = (unsigned short)8042;
long long int var_24 = 7662443928674000322LL;
unsigned char arr_1 [14] ;
unsigned short arr_2 [14] [14] [14] ;
long long int arr_4 [14] [14] ;
signed char arr_5 [14] ;
unsigned short arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)53856 : (unsigned short)55868;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = -9107072888152531519LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (signed char)-40;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (unsigned short)24093;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
