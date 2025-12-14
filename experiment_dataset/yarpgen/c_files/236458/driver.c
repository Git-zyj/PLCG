#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)250;
unsigned int var_2 = 2827843805U;
long long int var_5 = 1201211658134518429LL;
long long int var_8 = -3615728110531996765LL;
unsigned long long int var_10 = 11655998474563962882ULL;
unsigned long long int var_11 = 16388536736897786322ULL;
unsigned int var_13 = 405659146U;
unsigned char var_16 = (unsigned char)90;
int zero = 0;
unsigned char var_17 = (unsigned char)128;
unsigned short var_18 = (unsigned short)32087;
unsigned char var_19 = (unsigned char)111;
unsigned short var_20 = (unsigned short)29302;
unsigned short var_21 = (unsigned short)29465;
unsigned short var_22 = (unsigned short)17893;
_Bool arr_1 [24] [24] ;
long long int arr_3 [24] ;
unsigned char arr_5 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 6008472402904496338LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)168 : (unsigned char)216;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
