#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)88;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-31;
unsigned short var_6 = (unsigned short)5931;
int var_7 = -359945357;
signed char var_8 = (signed char)-78;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 2402848194U;
unsigned char var_12 = (unsigned char)5;
int zero = 0;
signed char var_13 = (signed char)52;
unsigned int var_14 = 1527142773U;
signed char var_15 = (signed char)-42;
short var_16 = (short)573;
long long int var_17 = 2458899866247170406LL;
_Bool var_18 = (_Bool)1;
_Bool arr_0 [20] [20] ;
unsigned short arr_1 [20] ;
signed char arr_2 [20] ;
long long int arr_3 [25] ;
short arr_4 [25] [25] ;
short arr_5 [25] ;
signed char arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)53862;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)47;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 5945989543719107532LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-25307;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (short)-4399;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (signed char)20;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
