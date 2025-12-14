#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11574;
unsigned long long int var_1 = 6349487474221306400ULL;
unsigned char var_2 = (unsigned char)238;
unsigned char var_4 = (unsigned char)31;
long long int var_5 = 243778691096938948LL;
unsigned short var_6 = (unsigned short)40302;
short var_7 = (short)-28957;
long long int var_8 = 1070861637486540816LL;
unsigned char var_9 = (unsigned char)207;
int zero = 0;
unsigned long long int var_10 = 5651906298467577058ULL;
unsigned long long int var_11 = 18415964789427238377ULL;
unsigned int var_12 = 2543865931U;
unsigned char arr_0 [15] ;
unsigned int arr_1 [15] ;
long long int arr_2 [15] [15] ;
unsigned long long int arr_3 [15] ;
unsigned int arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 2444667197U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = -5308141094764593046LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 15713640078738918283ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 315295729U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
