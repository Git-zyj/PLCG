#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1457648309;
int var_1 = 1831140758;
int var_5 = 488697502;
short var_6 = (short)6135;
unsigned long long int var_14 = 242710372431430626ULL;
int var_17 = -1128974059;
int zero = 0;
unsigned short var_20 = (unsigned short)2581;
int var_21 = 280416604;
unsigned short var_22 = (unsigned short)17539;
short var_23 = (short)23630;
int var_24 = -1510085548;
signed char arr_1 [11] ;
short arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)15 : (signed char)122;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)3689 : (short)19136;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
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
