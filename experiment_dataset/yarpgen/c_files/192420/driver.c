#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54151;
int var_1 = -653826212;
unsigned char var_2 = (unsigned char)161;
signed char var_4 = (signed char)-37;
unsigned short var_7 = (unsigned short)43383;
unsigned short var_11 = (unsigned short)57605;
short var_12 = (short)-9331;
short var_13 = (short)5873;
unsigned short var_15 = (unsigned short)24835;
unsigned char var_16 = (unsigned char)230;
int zero = 0;
unsigned long long int var_17 = 15009998293571119736ULL;
short var_18 = (short)28557;
short var_19 = (short)-16047;
unsigned int var_20 = 2489054879U;
unsigned short arr_0 [25] [25] ;
signed char arr_1 [25] ;
signed char arr_2 [25] ;
unsigned int arr_3 [25] ;
_Bool arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)63388;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)-67;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)-43;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 3459585637U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
