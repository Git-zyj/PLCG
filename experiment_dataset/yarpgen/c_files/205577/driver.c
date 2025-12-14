#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12207;
unsigned long long int var_1 = 127918541543630065ULL;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)38629;
unsigned short var_8 = (unsigned short)3151;
short var_9 = (short)-5768;
_Bool var_10 = (_Bool)1;
short var_11 = (short)5954;
int zero = 0;
unsigned short var_17 = (unsigned short)14809;
unsigned char var_18 = (unsigned char)101;
signed char var_19 = (signed char)-36;
_Bool var_20 = (_Bool)1;
unsigned short arr_0 [23] [23] ;
long long int arr_1 [23] ;
unsigned char arr_2 [23] [23] ;
unsigned short arr_3 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)49183;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -7918080580152467204LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)27062;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
