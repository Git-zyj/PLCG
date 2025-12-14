#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2842739377U;
unsigned int var_2 = 246146399U;
unsigned int var_3 = 1301818520U;
int var_4 = -945600104;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 8169055590151085331ULL;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 3371481765U;
int var_11 = -1387463921;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-27458;
int zero = 0;
unsigned char var_14 = (unsigned char)139;
unsigned int var_15 = 949294450U;
int var_16 = 1759873544;
unsigned long long int arr_0 [14] ;
unsigned long long int arr_1 [14] [14] ;
signed char arr_2 [17] [17] ;
signed char arr_3 [17] ;
unsigned int arr_4 [17] ;
unsigned int arr_5 [17] ;
unsigned int arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 10858741244760637712ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 16993221342914458332ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)62;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (signed char)-101;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 13245337U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 1150852283U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 2746873010U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
