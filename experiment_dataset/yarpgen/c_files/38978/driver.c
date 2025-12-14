#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)18;
unsigned int var_2 = 2172047266U;
unsigned short var_10 = (unsigned short)17526;
unsigned char var_11 = (unsigned char)105;
short var_15 = (short)330;
signed char var_17 = (signed char)93;
int zero = 0;
unsigned short var_19 = (unsigned short)55025;
signed char var_20 = (signed char)43;
signed char var_21 = (signed char)46;
short var_22 = (short)10826;
long long int var_23 = 3881503124023207633LL;
short var_24 = (short)-27447;
int var_25 = -647215489;
_Bool var_26 = (_Bool)0;
signed char arr_3 [19] [19] [19] ;
long long int arr_5 [19] ;
unsigned short arr_6 [19] ;
signed char arr_7 [19] ;
long long int arr_10 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)-92;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = -1437279125356098066LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (unsigned short)4801;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (signed char)103;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = -2382151103188791912LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
