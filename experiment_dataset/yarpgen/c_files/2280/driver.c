#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16406;
_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)48493;
int var_7 = 1280805607;
signed char var_10 = (signed char)18;
unsigned long long int var_11 = 750741122853750483ULL;
short var_12 = (short)19168;
int zero = 0;
int var_15 = 1633486930;
int var_16 = -1554696500;
_Bool var_17 = (_Bool)0;
short var_18 = (short)16079;
int var_19 = -879613471;
long long int arr_3 [22] ;
int arr_5 [22] [22] ;
int arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = -7716665808936049350LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 1815635973;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = -1268588465;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
