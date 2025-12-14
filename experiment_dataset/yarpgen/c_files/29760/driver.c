#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40846;
int var_1 = 481163054;
unsigned int var_2 = 1530077508U;
long long int var_3 = -8740854232398066034LL;
signed char var_5 = (signed char)112;
short var_6 = (short)-295;
unsigned short var_9 = (unsigned short)10026;
short var_10 = (short)16765;
signed char var_11 = (signed char)-99;
int zero = 0;
unsigned long long int var_13 = 11194131606416987556ULL;
unsigned int var_14 = 1962418828U;
unsigned short var_15 = (unsigned short)54895;
short var_16 = (short)-10667;
unsigned int var_17 = 1748318458U;
unsigned char var_18 = (unsigned char)61;
signed char var_19 = (signed char)31;
_Bool var_20 = (_Bool)1;
unsigned long long int arr_1 [14] ;
signed char arr_2 [14] ;
unsigned int arr_3 [14] ;
signed char arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 16933715660658764550ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)97;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 1668193953U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (signed char)-120;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
