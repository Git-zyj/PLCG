#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -973937451;
signed char var_2 = (signed char)25;
unsigned int var_3 = 217752074U;
unsigned short var_5 = (unsigned short)53833;
unsigned short var_11 = (unsigned short)58062;
long long int var_12 = 7202070624216720495LL;
unsigned short var_13 = (unsigned short)12909;
int zero = 0;
signed char var_18 = (signed char)83;
unsigned int var_19 = 3930713378U;
unsigned long long int var_20 = 13410498702826741290ULL;
short arr_2 [14] ;
short arr_11 [14] [14] ;
unsigned int arr_13 [14] ;
unsigned long long int arr_4 [14] ;
unsigned long long int arr_5 [14] ;
long long int arr_14 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (short)-31626;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = (short)18381;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = 1063683597U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 18372235904219794756ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 8909634824645207099ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = 6065536989364548342LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
