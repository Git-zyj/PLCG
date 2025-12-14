#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3595867382U;
_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)91;
unsigned char var_4 = (unsigned char)117;
_Bool var_7 = (_Bool)0;
long long int var_10 = 1348076685838376194LL;
signed char var_11 = (signed char)122;
unsigned char var_13 = (unsigned char)247;
signed char var_15 = (signed char)-47;
int zero = 0;
long long int var_16 = 7512329396604175372LL;
unsigned char var_17 = (unsigned char)241;
short var_18 = (short)21289;
unsigned long long int var_19 = 15112501463600405986ULL;
signed char var_20 = (signed char)57;
unsigned char arr_1 [16] [16] ;
signed char arr_2 [16] ;
unsigned int arr_3 [16] ;
unsigned long long int arr_4 [16] [16] ;
unsigned char arr_5 [16] ;
unsigned short arr_6 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (signed char)29;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 1105242105U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 9282346666649499466ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned char)232;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)21670;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
