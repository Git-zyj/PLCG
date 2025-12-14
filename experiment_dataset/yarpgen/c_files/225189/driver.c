#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8643812968488930697LL;
_Bool var_1 = (_Bool)1;
short var_2 = (short)-4271;
unsigned short var_3 = (unsigned short)3877;
int var_4 = 930633013;
short var_5 = (short)-402;
_Bool var_7 = (_Bool)1;
int var_8 = -1676803366;
long long int var_9 = -4368383148087943649LL;
unsigned int var_10 = 3072353164U;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = 2340668602806281841LL;
long long int var_14 = 1370031411614910769LL;
unsigned char var_15 = (unsigned char)13;
_Bool var_16 = (_Bool)1;
long long int var_17 = 3311416987368380147LL;
int arr_0 [11] [11] ;
short arr_1 [11] ;
long long int arr_4 [11] ;
short arr_6 [11] ;
long long int arr_7 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 634568604;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)8384;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = -5999356924618730227LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)-21866 : (short)-9933;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 6261237496148194093LL : 3469909681878410246LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
