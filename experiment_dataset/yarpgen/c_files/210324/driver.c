#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1294007564482193216LL;
unsigned int var_3 = 510125857U;
unsigned char var_4 = (unsigned char)69;
unsigned long long int var_7 = 4103541542706264581ULL;
unsigned long long int var_8 = 711990016165791508ULL;
short var_11 = (short)1535;
int zero = 0;
unsigned char var_12 = (unsigned char)42;
long long int var_13 = -8292521251311743379LL;
unsigned char var_14 = (unsigned char)76;
unsigned char arr_0 [21] [21] ;
unsigned int arr_1 [21] [21] ;
int arr_2 [21] ;
unsigned int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)85;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 2752831622U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -1270105304;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 1165562749U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
