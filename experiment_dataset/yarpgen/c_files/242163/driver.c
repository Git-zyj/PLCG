#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2781128191U;
unsigned long long int var_3 = 9355188257484407792ULL;
unsigned long long int var_4 = 6890052881269753310ULL;
short var_6 = (short)25010;
long long int var_7 = -1409832698246400232LL;
unsigned int var_8 = 3848138609U;
long long int var_11 = 664782599646405575LL;
int var_13 = 361794867;
unsigned long long int var_16 = 2805683645033268924ULL;
unsigned char var_17 = (unsigned char)48;
int zero = 0;
unsigned long long int var_18 = 5239293541800254977ULL;
unsigned char var_19 = (unsigned char)80;
unsigned char var_20 = (unsigned char)44;
signed char var_21 = (signed char)117;
long long int var_22 = -2975306802203691618LL;
signed char var_23 = (signed char)11;
long long int var_24 = -7611869317530397528LL;
unsigned short arr_0 [24] ;
unsigned char arr_1 [24] ;
int arr_2 [24] ;
unsigned char arr_5 [24] [24] ;
long long int arr_6 [24] [24] ;
unsigned long long int arr_9 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)65239 : (unsigned short)64510;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 492295532 : 515905847;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)54;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = -1760292392293417632LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = 16069822814153782932ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
