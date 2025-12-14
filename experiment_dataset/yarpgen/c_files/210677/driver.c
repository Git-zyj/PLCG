#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8717;
_Bool var_5 = (_Bool)1;
int var_8 = -2023594024;
unsigned long long int var_9 = 16799940872196893494ULL;
unsigned int var_10 = 2167556115U;
unsigned short var_12 = (unsigned short)15131;
int zero = 0;
int var_14 = 2007955394;
unsigned short var_15 = (unsigned short)25957;
unsigned int var_16 = 429989019U;
long long int var_17 = -4445019293522980168LL;
int var_18 = 289982684;
int var_19 = 845942455;
_Bool arr_0 [10] ;
long long int arr_1 [10] [10] ;
int arr_2 [10] [10] ;
long long int arr_3 [10] ;
unsigned int arr_4 [10] [10] [10] ;
unsigned long long int arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 6606783901115884672LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 1503161143;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 5237433797932375640LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 671794043U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 15889298015650252080ULL : 9929366031285738219ULL;
}

void checksum() {
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
