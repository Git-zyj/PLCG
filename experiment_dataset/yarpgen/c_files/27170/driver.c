#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8639;
unsigned int var_2 = 2798349298U;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-47;
short var_6 = (short)-29963;
unsigned long long int var_8 = 8582157909604620247ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)86;
long long int var_11 = -6402226761960886111LL;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 4155094810U;
int var_14 = 1017892325;
int var_15 = -462198177;
unsigned char var_16 = (unsigned char)103;
short var_17 = (short)20803;
unsigned int arr_0 [22] ;
long long int arr_1 [22] [22] ;
_Bool arr_3 [22] ;
unsigned char arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 70886774U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 3472901060098798670LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned char)167;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
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
