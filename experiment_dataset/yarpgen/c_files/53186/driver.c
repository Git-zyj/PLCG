#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)121;
_Bool var_1 = (_Bool)0;
unsigned int var_4 = 1171957381U;
signed char var_6 = (signed char)16;
int var_8 = 1803229158;
_Bool var_9 = (_Bool)0;
short var_10 = (short)22913;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 161559576137553301ULL;
int zero = 0;
unsigned long long int var_13 = 13993591805162615921ULL;
unsigned char var_14 = (unsigned char)7;
short var_15 = (short)-28941;
unsigned short var_16 = (unsigned short)40629;
unsigned char var_17 = (unsigned char)170;
long long int var_18 = 2511334233371574033LL;
unsigned short arr_0 [15] [15] ;
signed char arr_2 [24] ;
unsigned short arr_3 [24] ;
signed char arr_4 [24] [24] ;
unsigned char arr_5 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)12094;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (signed char)100;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)58526;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)172;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
