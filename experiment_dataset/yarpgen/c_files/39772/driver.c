#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)9381;
signed char var_4 = (signed char)-44;
signed char var_5 = (signed char)-3;
short var_6 = (short)-11588;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)28565;
unsigned short var_11 = (unsigned short)27697;
unsigned int var_13 = 3366770700U;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)65009;
unsigned int var_16 = 3485091741U;
unsigned short var_18 = (unsigned short)13347;
int zero = 0;
unsigned short var_20 = (unsigned short)2940;
unsigned long long int var_21 = 4847884313859759664ULL;
unsigned short var_22 = (unsigned short)45077;
unsigned int var_23 = 3895193342U;
signed char arr_0 [18] ;
unsigned char arr_1 [18] ;
_Bool arr_2 [18] ;
unsigned char arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)-85;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned char)218;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
