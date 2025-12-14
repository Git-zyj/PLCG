#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2987664752351342881LL;
unsigned int var_2 = 2384318493U;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 2996048654999899187ULL;
unsigned short var_6 = (unsigned short)60156;
short var_7 = (short)12513;
unsigned long long int var_8 = 9624895679796506937ULL;
short var_12 = (short)-17436;
_Bool var_15 = (_Bool)1;
short var_16 = (short)30455;
int zero = 0;
unsigned long long int var_17 = 13927641791738745745ULL;
unsigned short var_18 = (unsigned short)1164;
signed char var_19 = (signed char)-8;
unsigned short var_20 = (unsigned short)61633;
unsigned char var_21 = (unsigned char)107;
unsigned char var_22 = (unsigned char)136;
long long int var_23 = -7742158955064260014LL;
unsigned short var_24 = (unsigned short)21403;
unsigned int arr_0 [16] ;
short arr_1 [16] ;
signed char arr_7 [12] ;
_Bool arr_9 [12] ;
unsigned short arr_4 [14] [14] ;
_Bool arr_5 [14] ;
int arr_8 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 3301828106U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)20809;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (signed char)5;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)4911 : (unsigned short)14068;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = -1324993517;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
