#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24539;
unsigned short var_3 = (unsigned short)49044;
signed char var_4 = (signed char)23;
int var_7 = -45729896;
signed char var_8 = (signed char)-12;
short var_9 = (short)-11753;
long long int var_11 = 367180669245545758LL;
int var_12 = -1397373635;
_Bool var_14 = (_Bool)0;
int var_16 = 1604161764;
unsigned int var_17 = 1382971133U;
int zero = 0;
long long int var_20 = -7378645900048429160LL;
short var_21 = (short)4396;
unsigned int var_22 = 2317294992U;
unsigned long long int var_23 = 9039588044454612284ULL;
long long int var_24 = -1302585969302843129LL;
unsigned int var_25 = 3645395630U;
long long int var_26 = -4302559631042660055LL;
_Bool var_27 = (_Bool)0;
signed char arr_0 [12] [12] ;
signed char arr_3 [11] ;
long long int arr_8 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-22 : (signed char)41;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = -9068943938238452516LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
