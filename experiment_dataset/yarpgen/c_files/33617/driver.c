#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -294422537;
int var_1 = -469785334;
unsigned char var_4 = (unsigned char)15;
unsigned char var_6 = (unsigned char)40;
short var_7 = (short)15706;
short var_8 = (short)17027;
short var_9 = (short)-31849;
unsigned short var_10 = (unsigned short)31464;
unsigned short var_11 = (unsigned short)45478;
int var_12 = -941681225;
_Bool var_13 = (_Bool)1;
unsigned int var_16 = 1462463534U;
int zero = 0;
short var_18 = (short)32755;
unsigned char var_19 = (unsigned char)132;
short var_20 = (short)31000;
signed char var_21 = (signed char)17;
unsigned short var_22 = (unsigned short)14171;
_Bool var_23 = (_Bool)0;
short var_24 = (short)25664;
_Bool arr_0 [25] ;
unsigned long long int arr_1 [25] [25] ;
short arr_2 [25] [25] ;
unsigned short arr_3 [25] ;
int arr_8 [21] ;
int arr_9 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 5997852939263759067ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-4800;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned short)44012;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = -1226298336;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = 1053694311;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
