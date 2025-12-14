#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15485041001029236540ULL;
signed char var_5 = (signed char)70;
unsigned int var_6 = 2625686438U;
unsigned int var_7 = 2078985666U;
unsigned char var_8 = (unsigned char)4;
unsigned char var_10 = (unsigned char)115;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 675794576U;
unsigned int var_15 = 2293587302U;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2477197145U;
unsigned long long int var_18 = 13235743008422311112ULL;
unsigned char arr_4 [12] [12] ;
long long int arr_6 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)218 : (unsigned char)111;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 8487803361872134425LL : -8711526038853810634LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
