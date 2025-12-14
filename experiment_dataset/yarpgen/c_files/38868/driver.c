#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -254417049;
unsigned short var_3 = (unsigned short)39433;
_Bool var_5 = (_Bool)1;
int var_6 = -1894683158;
unsigned short var_7 = (unsigned short)11898;
unsigned short var_9 = (unsigned short)10595;
unsigned long long int var_14 = 6720248204773824880ULL;
unsigned char var_16 = (unsigned char)195;
int zero = 0;
signed char var_18 = (signed char)-85;
short var_19 = (short)-10082;
unsigned char var_20 = (unsigned char)114;
int var_21 = 289097912;
unsigned int arr_0 [11] ;
unsigned short arr_1 [11] ;
unsigned char arr_2 [11] [11] ;
unsigned int arr_3 [11] ;
_Bool arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 1841204663U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned short)63191;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 1173147599U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
