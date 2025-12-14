#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18388;
int var_2 = -551930248;
unsigned short var_4 = (unsigned short)35118;
unsigned short var_6 = (unsigned short)47573;
unsigned char var_9 = (unsigned char)54;
int var_10 = 24292200;
unsigned int var_11 = 3568816136U;
unsigned char var_12 = (unsigned char)248;
long long int var_14 = 4431982178577821467LL;
unsigned int var_15 = 326763533U;
int zero = 0;
unsigned char var_16 = (unsigned char)33;
int var_17 = -1732643531;
unsigned char var_18 = (unsigned char)42;
unsigned int var_19 = 3368676461U;
unsigned char var_20 = (unsigned char)41;
unsigned char var_21 = (unsigned char)190;
unsigned long long int arr_0 [13] [13] ;
signed char arr_1 [13] ;
long long int arr_5 [15] ;
unsigned char arr_6 [15] [15] ;
long long int arr_2 [13] ;
unsigned int arr_3 [13] ;
unsigned long long int arr_4 [13] ;
unsigned char arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 4504868827209006857ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)67;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = -7850417863169723964LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 8291493842203247468LL : 2230690635918352632LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 2175239301U : 1664706814U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 14410634078184310391ULL : 5688100898009049385ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (unsigned char)77;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
