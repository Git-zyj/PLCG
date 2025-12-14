#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24679;
unsigned short var_7 = (unsigned short)28044;
long long int var_9 = -1203593768446572952LL;
unsigned long long int var_11 = 4484171502410714822ULL;
signed char var_12 = (signed char)33;
short var_13 = (short)-31149;
int zero = 0;
int var_18 = -1141464518;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-88;
unsigned char var_21 = (unsigned char)153;
int var_22 = 1905771009;
unsigned int var_23 = 2119928709U;
short var_24 = (short)20443;
long long int arr_1 [24] ;
unsigned short arr_2 [24] ;
unsigned short arr_3 [24] [24] ;
short arr_8 [24] [24] [24] [24] ;
unsigned int arr_10 [24] [24] ;
unsigned int arr_14 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -8652184885818089847LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)20620;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)51350;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)31143 : (short)-314;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 1550729394U : 659800732U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 864462593U : 4155832115U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
