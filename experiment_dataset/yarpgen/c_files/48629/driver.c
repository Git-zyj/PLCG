#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)185;
unsigned int var_1 = 2380771896U;
short var_3 = (short)17799;
unsigned char var_6 = (unsigned char)182;
unsigned char var_9 = (unsigned char)36;
unsigned short var_13 = (unsigned short)63842;
long long int var_14 = -3428381082411324844LL;
unsigned short var_15 = (unsigned short)3781;
int zero = 0;
short var_18 = (short)-19173;
signed char var_19 = (signed char)63;
long long int var_20 = -4080729499039713914LL;
unsigned short var_21 = (unsigned short)1832;
unsigned char var_22 = (unsigned char)151;
signed char var_23 = (signed char)-87;
unsigned char var_24 = (unsigned char)86;
short arr_0 [15] ;
unsigned char arr_1 [15] [15] ;
unsigned int arr_3 [24] ;
unsigned int arr_4 [24] ;
int arr_2 [15] ;
unsigned char arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)26310;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)156;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 2753232659U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 966995070U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -1251226704;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned char)22;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
