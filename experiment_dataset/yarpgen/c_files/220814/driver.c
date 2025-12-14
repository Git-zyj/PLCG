#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -194744189;
int var_3 = -2100631148;
unsigned short var_4 = (unsigned short)7425;
unsigned int var_5 = 2179016167U;
unsigned char var_7 = (unsigned char)39;
long long int var_8 = -5246300115865438129LL;
short var_11 = (short)-23317;
int var_12 = -70337249;
int zero = 0;
long long int var_13 = 44453608844301596LL;
unsigned short var_14 = (unsigned short)32081;
short var_15 = (short)23396;
unsigned short var_16 = (unsigned short)43987;
unsigned char arr_0 [11] [11] ;
short arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (short)8880;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
