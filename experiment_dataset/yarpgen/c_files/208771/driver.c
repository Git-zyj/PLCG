#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2077485114;
unsigned char var_1 = (unsigned char)137;
unsigned char var_5 = (unsigned char)235;
unsigned long long int var_6 = 16814768054300393709ULL;
signed char var_8 = (signed char)-65;
long long int var_9 = 8811983209300999905LL;
short var_10 = (short)-5373;
unsigned int var_11 = 1251750932U;
long long int var_12 = 8738797907177490731LL;
int zero = 0;
unsigned long long int var_14 = 15958493696165917530ULL;
unsigned int var_15 = 2311292087U;
unsigned int var_16 = 1196550488U;
short var_17 = (short)5732;
_Bool arr_3 [21] [21] ;
long long int arr_4 [21] ;
_Bool arr_8 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 1843990080384570188LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
