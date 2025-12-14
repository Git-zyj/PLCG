#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6581764888814351809ULL;
unsigned int var_3 = 279476919U;
long long int var_4 = -6518459332288911159LL;
unsigned short var_5 = (unsigned short)8249;
unsigned long long int var_10 = 17763084067683927616ULL;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)52;
_Bool var_14 = (_Bool)1;
unsigned long long int var_16 = 3250925119196747417ULL;
int zero = 0;
signed char var_17 = (signed char)103;
short var_18 = (short)7638;
signed char var_19 = (signed char)-76;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)2885;
signed char var_22 = (signed char)48;
unsigned long long int var_23 = 15343704950486111683ULL;
_Bool var_24 = (_Bool)1;
_Bool arr_0 [12] ;
short arr_1 [12] ;
unsigned short arr_4 [16] ;
unsigned int arr_2 [12] [12] ;
long long int arr_8 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)4087;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned short)61305;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 2150841549U : 2364064844U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = -6087811205219109068LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
