#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-11107;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 16705240700630648386ULL;
long long int var_7 = -3412976415189033754LL;
long long int var_8 = -8546867378806482436LL;
signed char var_10 = (signed char)-75;
int var_11 = -796264848;
long long int var_14 = -7601795839332734328LL;
long long int var_15 = -4191570143440503516LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 15289335323907922303ULL;
short var_20 = (short)-4884;
unsigned char var_21 = (unsigned char)38;
unsigned short var_22 = (unsigned short)61756;
int var_23 = -1164631285;
unsigned int var_24 = 330472609U;
signed char var_25 = (signed char)-69;
signed char var_26 = (signed char)-65;
unsigned long long int arr_0 [11] [11] ;
unsigned int arr_8 [11] [11] ;
unsigned short arr_5 [11] [11] ;
_Bool arr_11 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 15842981456654663581ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = 4283736287U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)51623;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
