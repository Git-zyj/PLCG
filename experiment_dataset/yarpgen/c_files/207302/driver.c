#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-24509;
signed char var_2 = (signed char)-20;
signed char var_3 = (signed char)-91;
long long int var_7 = 1079754313876082298LL;
unsigned long long int var_9 = 16265005732916156589ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)117;
signed char var_14 = (signed char)76;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 6304181323665439195ULL;
unsigned long long int var_17 = 16974553381965023438ULL;
long long int arr_0 [13] ;
unsigned int arr_1 [13] ;
int arr_2 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -7850613450409487090LL : -3231080297688150595LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 2941255058U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1055728298 : 398118737;
}

void checksum() {
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
