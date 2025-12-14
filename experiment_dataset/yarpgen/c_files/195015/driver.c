#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -1895325992;
unsigned short var_13 = (unsigned short)34589;
unsigned short var_15 = (unsigned short)61801;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = -1282973456;
unsigned char var_18 = (unsigned char)7;
signed char var_19 = (signed char)81;
unsigned short var_20 = (unsigned short)57837;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 1306739041U;
signed char var_23 = (signed char)-32;
short var_24 = (short)-24825;
signed char var_25 = (signed char)1;
unsigned int var_26 = 3329301887U;
unsigned int var_27 = 2460001785U;
int var_28 = 1402225733;
signed char arr_0 [19] ;
unsigned char arr_1 [19] ;
signed char arr_2 [25] ;
short arr_3 [25] [25] ;
int arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)15;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-46 : (signed char)96;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-4528;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -2076674715 : -1103576483;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
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
