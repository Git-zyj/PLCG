#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56503;
short var_1 = (short)-20624;
signed char var_2 = (signed char)-6;
unsigned short var_3 = (unsigned short)25611;
int var_4 = -2127828272;
short var_6 = (short)-16189;
short var_7 = (short)-6470;
unsigned int var_8 = 2030117897U;
signed char var_11 = (signed char)-85;
int zero = 0;
long long int var_13 = 4639892798608774803LL;
unsigned short var_14 = (unsigned short)36514;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-30381;
unsigned long long int var_17 = 4738880181345011293ULL;
unsigned short arr_1 [15] [15] ;
short arr_2 [15] ;
_Bool arr_3 [18] ;
int arr_4 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)29456;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (short)3230;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 986765800;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
