#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-22490;
_Bool var_4 = (_Bool)1;
signed char var_7 = (signed char)6;
int var_8 = -1674008357;
int var_10 = -1973987910;
int var_11 = -1430847961;
unsigned short var_15 = (unsigned short)47761;
int zero = 0;
unsigned short var_18 = (unsigned short)63012;
int var_19 = -166807852;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)42;
int var_22 = -464610371;
unsigned long long int arr_0 [21] ;
unsigned char arr_2 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 8551820875440431378ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)114;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
