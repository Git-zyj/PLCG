#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)72;
short var_2 = (short)7579;
unsigned char var_3 = (unsigned char)162;
unsigned long long int var_4 = 18382335483584374454ULL;
unsigned long long int var_5 = 12016210355264517359ULL;
unsigned int var_6 = 1757554932U;
unsigned int var_7 = 4036233749U;
unsigned char var_8 = (unsigned char)10;
short var_10 = (short)16516;
unsigned char var_13 = (unsigned char)185;
unsigned int var_14 = 3334955456U;
unsigned short var_15 = (unsigned short)34955;
int zero = 0;
int var_16 = -219037302;
unsigned int var_17 = 2452606568U;
signed char arr_2 [15] ;
_Bool arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (signed char)-31;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
