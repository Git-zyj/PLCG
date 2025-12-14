#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 564724357259272578ULL;
long long int var_2 = -373289877734631563LL;
int var_3 = 258378993;
int var_5 = -1964462232;
_Bool var_6 = (_Bool)0;
long long int var_7 = 5276973273314518875LL;
signed char var_8 = (signed char)70;
int var_9 = 1798360543;
unsigned long long int var_10 = 2307797322572219417ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_12 = 5541376948846061018LL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 3941889109809147896ULL;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)40385;
unsigned short var_17 = (unsigned short)9994;
unsigned long long int arr_0 [19] ;
signed char arr_1 [19] ;
long long int arr_2 [19] ;
unsigned short arr_3 [19] [19] ;
int arr_4 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 17483070263761000307ULL : 17473674935454685706ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -5053262693613618944LL : 2766982554589155007LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)16684;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 981854026;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
