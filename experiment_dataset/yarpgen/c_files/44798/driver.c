#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)12;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)225;
signed char var_6 = (signed char)-52;
unsigned long long int var_8 = 10657037894375120237ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned short var_11 = (unsigned short)25857;
unsigned long long int var_12 = 18397287336876519092ULL;
int var_13 = 634317405;
unsigned short var_14 = (unsigned short)40594;
unsigned long long int var_15 = 13631607043982038602ULL;
signed char arr_0 [11] ;
long long int arr_1 [11] [11] ;
unsigned long long int arr_3 [11] [11] ;
unsigned long long int arr_5 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)63;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 1750289824109590859LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 9950271190151875536ULL : 2275591795440629644ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 11247060858286296901ULL : 13148029042380750760ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
