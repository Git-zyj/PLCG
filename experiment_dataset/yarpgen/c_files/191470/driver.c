#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 527866069;
int var_2 = -503813348;
unsigned long long int var_4 = 8191296971538911509ULL;
unsigned long long int var_7 = 10890367332312923923ULL;
int var_9 = -1781738741;
unsigned long long int var_11 = 7722977847044056149ULL;
int zero = 0;
int var_12 = 1780030368;
int var_13 = -1680278456;
int var_14 = -1971236462;
int var_15 = -937393677;
int var_16 = 1348836256;
int arr_5 [25] ;
int arr_4 [21] ;
unsigned long long int arr_7 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = -66651887;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 766788144 : -967413639;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 16950879429733689958ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
