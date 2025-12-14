#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2611645663467353932LL;
unsigned short var_2 = (unsigned short)8520;
unsigned short var_3 = (unsigned short)49006;
unsigned long long int var_4 = 143588756124031067ULL;
unsigned int var_5 = 81885166U;
short var_7 = (short)21321;
unsigned short var_8 = (unsigned short)55172;
unsigned int var_10 = 1114107215U;
int zero = 0;
long long int var_12 = 390168007787219300LL;
long long int var_13 = 7990835534681001854LL;
int var_14 = -782805641;
long long int var_15 = -4238948302393173110LL;
unsigned short var_16 = (unsigned short)31771;
int arr_1 [15] [15] ;
_Bool arr_4 [24] ;
unsigned long long int arr_2 [15] ;
short arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = -2124052774;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 18361062302602367587ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)14686;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
