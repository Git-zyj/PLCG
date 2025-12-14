#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)244;
unsigned int var_5 = 3737944709U;
long long int var_7 = 6526046804486007593LL;
unsigned long long int var_8 = 16304636925427180784ULL;
unsigned char var_9 = (unsigned char)92;
int zero = 0;
unsigned int var_11 = 2835125358U;
signed char var_12 = (signed char)-86;
long long int var_13 = -6858322918519325159LL;
short var_14 = (short)-21824;
long long int var_15 = 2935954898288026690LL;
long long int arr_0 [22] ;
unsigned int arr_1 [22] ;
int arr_2 [22] ;
unsigned long long int arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 3809904649641858901LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 4246229956U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 1079428056;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 14035961894711392786ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
