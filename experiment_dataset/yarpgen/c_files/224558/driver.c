#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3501112208707819277ULL;
unsigned long long int var_7 = 5914176643125508024ULL;
unsigned char var_8 = (unsigned char)127;
unsigned short var_11 = (unsigned short)52984;
unsigned short var_13 = (unsigned short)20808;
unsigned long long int var_14 = 7033562516821865243ULL;
unsigned short var_16 = (unsigned short)8655;
unsigned short var_19 = (unsigned short)16765;
int zero = 0;
unsigned char var_20 = (unsigned char)172;
unsigned short var_21 = (unsigned short)60113;
unsigned short var_22 = (unsigned short)56031;
unsigned long long int var_23 = 3256087203161087603ULL;
unsigned char var_24 = (unsigned char)91;
unsigned short var_25 = (unsigned short)21470;
unsigned long long int var_26 = 5337310935742933721ULL;
unsigned int var_27 = 668675668U;
unsigned char var_28 = (unsigned char)220;
unsigned char var_29 = (unsigned char)103;
unsigned long long int arr_3 [22] ;
unsigned short arr_5 [22] ;
unsigned short arr_9 [13] ;
unsigned int arr_15 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 2455447318954354186ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (unsigned short)23225;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (unsigned short)47557;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = 2636428556U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
