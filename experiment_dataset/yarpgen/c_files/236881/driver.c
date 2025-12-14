#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 4783214;
unsigned char var_2 = (unsigned char)195;
unsigned long long int var_4 = 16756431982233715143ULL;
unsigned char var_5 = (unsigned char)67;
unsigned long long int var_6 = 10636926677701743739ULL;
unsigned char var_7 = (unsigned char)250;
short var_9 = (short)10025;
short var_10 = (short)-10784;
unsigned short var_11 = (unsigned short)65298;
int zero = 0;
unsigned long long int var_12 = 5293485520362608590ULL;
short var_13 = (short)-11527;
unsigned long long int var_14 = 12086455178613013463ULL;
short var_15 = (short)-18924;
unsigned long long int var_16 = 17874238884394077437ULL;
int arr_0 [12] ;
_Bool arr_1 [12] ;
unsigned long long int arr_3 [12] ;
int arr_4 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 801166720;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 8109959224173228638ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = -2089597159;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
