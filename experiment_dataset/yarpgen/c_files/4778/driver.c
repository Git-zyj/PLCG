#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)54401;
unsigned char var_6 = (unsigned char)199;
_Bool var_9 = (_Bool)0;
unsigned char var_13 = (unsigned char)197;
unsigned char var_14 = (unsigned char)185;
unsigned char var_17 = (unsigned char)19;
int zero = 0;
short var_19 = (short)-17296;
long long int var_20 = 4918669935357361662LL;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)17040;
unsigned char var_23 = (unsigned char)218;
short var_24 = (short)-6744;
unsigned char var_25 = (unsigned char)241;
unsigned char var_26 = (unsigned char)172;
unsigned short var_27 = (unsigned short)39277;
unsigned long long int arr_2 [23] [23] [23] ;
unsigned char arr_5 [23] ;
unsigned char arr_6 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 5735157122266207491ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)151 : (unsigned char)161;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
