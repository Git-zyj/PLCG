#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29768;
signed char var_3 = (signed char)-6;
unsigned char var_5 = (unsigned char)83;
_Bool var_7 = (_Bool)0;
int var_12 = 725050391;
int var_15 = 779652420;
unsigned char var_16 = (unsigned char)151;
unsigned long long int var_17 = 6417432467307613810ULL;
int zero = 0;
int var_19 = 283891780;
short var_20 = (short)31077;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
int var_23 = 435852891;
_Bool var_24 = (_Bool)0;
unsigned int arr_0 [24] ;
_Bool arr_1 [24] [24] ;
unsigned char arr_2 [24] ;
long long int arr_3 [24] ;
int arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 198389773U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 682127033969032974LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = -217163604;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
