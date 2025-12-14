#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 18050519091948371664ULL;
unsigned char var_5 = (unsigned char)215;
unsigned long long int var_7 = 3720622969244757953ULL;
int zero = 0;
unsigned long long int var_10 = 2298392716822844432ULL;
unsigned char var_11 = (unsigned char)111;
unsigned long long int var_12 = 14009046307464252480ULL;
unsigned long long int var_13 = 17815553395377069082ULL;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 12800641891310556594ULL;
unsigned long long int var_17 = 7556658165035521475ULL;
unsigned long long int var_18 = 12090854629405016706ULL;
_Bool var_19 = (_Bool)1;
unsigned char arr_0 [21] [21] ;
unsigned long long int arr_1 [21] ;
_Bool arr_2 [25] [25] ;
unsigned long long int arr_3 [25] [25] ;
unsigned char arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)78;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 9621398495273202948ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 2372340690040655189ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned char)160;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
