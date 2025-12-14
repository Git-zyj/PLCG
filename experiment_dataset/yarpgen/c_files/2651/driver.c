#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -109939380;
int var_2 = 524307884;
long long int var_10 = -7894598151197016896LL;
int var_15 = -1490080047;
int var_16 = -1434065284;
int zero = 0;
short var_17 = (short)-29406;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)10982;
unsigned long long int var_21 = 12128875938059315725ULL;
long long int var_22 = -6518416002271351886LL;
_Bool arr_0 [17] ;
unsigned short arr_1 [17] ;
long long int arr_2 [17] [17] ;
short arr_6 [15] ;
int arr_3 [17] ;
long long int arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)48613 : (unsigned short)31522;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? -391517216237767523LL : 1324074354224246580LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)-24961 : (short)20873;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1544966669 : -1829664939;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 2951649181912388354LL : -2669119465372856614LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
