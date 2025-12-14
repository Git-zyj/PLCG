#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1304811835018951373ULL;
unsigned short var_1 = (unsigned short)54961;
signed char var_6 = (signed char)-52;
unsigned int var_13 = 309493215U;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 238403364U;
long long int var_19 = -2782493826142061345LL;
unsigned short var_20 = (unsigned short)41297;
int var_21 = 618547419;
unsigned char var_22 = (unsigned char)218;
unsigned short var_23 = (unsigned short)26050;
short var_24 = (short)-4533;
signed char var_25 = (signed char)-31;
_Bool var_26 = (_Bool)0;
unsigned int var_27 = 534738096U;
_Bool arr_0 [22] ;
unsigned short arr_6 [18] ;
unsigned int arr_2 [22] [22] ;
unsigned short arr_7 [18] ;
short arr_8 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (unsigned short)23567;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 1167361953U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (unsigned short)53219;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (short)5188;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
