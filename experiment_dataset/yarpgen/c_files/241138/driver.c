#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48607;
unsigned int var_1 = 2647317564U;
int var_2 = -2090936590;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)49161;
int var_7 = -1609915806;
long long int var_8 = 2435814592007940504LL;
signed char var_9 = (signed char)-73;
short var_10 = (short)5191;
int var_11 = 1402134560;
short var_12 = (short)14797;
int zero = 0;
signed char var_13 = (signed char)18;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)13;
short var_16 = (short)-21127;
int var_17 = 1928905771;
_Bool var_18 = (_Bool)1;
int var_19 = 884397951;
unsigned long long int var_20 = 851471414070098420ULL;
signed char var_21 = (signed char)13;
unsigned long long int var_22 = 6077497040201064148ULL;
int arr_1 [22] ;
_Bool arr_2 [21] ;
long long int arr_4 [25] ;
long long int arr_5 [25] [25] ;
unsigned char arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 59181238;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = -1161743908333266764LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = 7612273463493812249LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (unsigned char)61;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
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
