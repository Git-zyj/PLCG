#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6048015896604773446LL;
long long int var_1 = -8962636049040352197LL;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 1895333428U;
short var_5 = (short)-20997;
unsigned short var_6 = (unsigned short)63664;
unsigned short var_7 = (unsigned short)18034;
int var_9 = -1580400932;
short var_10 = (short)-21975;
short var_11 = (short)19130;
int zero = 0;
unsigned short var_13 = (unsigned short)27540;
unsigned long long int var_14 = 16506376817489463050ULL;
unsigned int var_15 = 3357907331U;
unsigned long long int arr_0 [12] ;
unsigned long long int arr_1 [12] [12] ;
unsigned char arr_2 [12] ;
_Bool arr_3 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 13705647580603483845ULL : 18097639930996679598ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 17675212724545352022ULL : 9408514128482991322ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)80 : (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
