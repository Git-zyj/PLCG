#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2183044972520243761ULL;
unsigned short var_1 = (unsigned short)62008;
unsigned long long int var_2 = 13587085119170637032ULL;
unsigned long long int var_3 = 7468167216644748382ULL;
unsigned long long int var_4 = 15988917302959613072ULL;
unsigned short var_5 = (unsigned short)48115;
int var_7 = -1391014422;
unsigned short var_8 = (unsigned short)22342;
short var_9 = (short)-24660;
int zero = 0;
long long int var_10 = -7748769336932394753LL;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
unsigned long long int arr_1 [25] [25] ;
unsigned int arr_4 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 1901740369697010957ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 4059481411U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
