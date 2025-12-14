#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7306344135440509156ULL;
unsigned long long int var_4 = 2588220670551586703ULL;
long long int var_5 = -7307277377730426972LL;
unsigned char var_6 = (unsigned char)23;
short var_7 = (short)14557;
unsigned char var_8 = (unsigned char)114;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 9733062279840240958ULL;
unsigned long long int var_16 = 5617883852874236332ULL;
short var_17 = (short)32402;
unsigned int var_18 = 3932617149U;
_Bool var_19 = (_Bool)1;
unsigned long long int arr_0 [23] ;
unsigned int arr_1 [23] ;
short arr_2 [23] [23] ;
_Bool arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 7379073874824598060ULL : 7346673571581538373ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 1229334562U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)8601 : (short)5122;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
