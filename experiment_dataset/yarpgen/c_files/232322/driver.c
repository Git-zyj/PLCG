#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11900;
unsigned short var_3 = (unsigned short)58012;
long long int var_4 = -3808424256471714783LL;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-20718;
long long int var_10 = -6657413222597540395LL;
int zero = 0;
short var_13 = (short)16839;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)73;
int var_16 = 1029446851;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 1349703010U;
_Bool var_19 = (_Bool)0;
long long int arr_0 [18] [18] ;
unsigned long long int arr_1 [18] ;
long long int arr_2 [18] [18] ;
short arr_3 [18] [18] ;
long long int arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = -2562392925132849590LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 6390557639437844634ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 5839338306811470917LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-24555 : (short)-25380;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = -8269006723333467451LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
