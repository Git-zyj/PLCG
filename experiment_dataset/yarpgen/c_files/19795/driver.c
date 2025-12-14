#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)31086;
unsigned long long int var_2 = 16493435045947836508ULL;
unsigned short var_4 = (unsigned short)39012;
signed char var_5 = (signed char)63;
signed char var_6 = (signed char)29;
unsigned short var_8 = (unsigned short)63671;
short var_9 = (short)-19530;
unsigned short var_10 = (unsigned short)62737;
unsigned int var_12 = 3087558925U;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 1902079006918486111ULL;
unsigned short var_15 = (unsigned short)18260;
unsigned short var_16 = (unsigned short)28510;
unsigned short var_17 = (unsigned short)20871;
long long int arr_0 [23] [23] ;
long long int arr_2 [23] [23] ;
unsigned char arr_3 [23] ;
signed char arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = -3469219256175812474LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 733468095245539488LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned char)149;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (signed char)-97;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
