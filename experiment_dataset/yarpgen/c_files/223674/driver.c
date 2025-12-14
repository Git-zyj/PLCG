#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)15171;
signed char var_2 = (signed char)-74;
long long int var_3 = 953674932777691046LL;
int var_4 = 1782422097;
long long int var_5 = 1482780691941169914LL;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)119;
int var_8 = -559586904;
signed char var_9 = (signed char)46;
int zero = 0;
signed char var_10 = (signed char)62;
unsigned int var_11 = 2155326141U;
unsigned long long int var_12 = 17236360861452152555ULL;
signed char var_13 = (signed char)54;
int var_14 = 670823832;
unsigned int var_15 = 141550781U;
int var_16 = 229151468;
signed char arr_0 [22] ;
long long int arr_1 [22] ;
unsigned char arr_2 [22] ;
_Bool arr_5 [16] [16] ;
unsigned char arr_6 [16] ;
_Bool arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)-113;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -4297222757418090470LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned char)252;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (unsigned char)198;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
