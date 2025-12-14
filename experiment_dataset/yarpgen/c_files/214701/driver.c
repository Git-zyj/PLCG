#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)154;
unsigned char var_2 = (unsigned char)88;
unsigned long long int var_3 = 5990518807614620068ULL;
unsigned char var_4 = (unsigned char)90;
unsigned char var_5 = (unsigned char)207;
unsigned long long int var_6 = 10089346152005530852ULL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 6822123742059239483ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)126;
unsigned long long int var_11 = 7172729111076437386ULL;
unsigned long long int var_12 = 1628992552420954777ULL;
unsigned long long int var_13 = 10620962588915856116ULL;
unsigned long long int var_14 = 14229419986609824761ULL;
unsigned long long int var_15 = 13405061590852753030ULL;
unsigned long long int arr_1 [25] [25] ;
_Bool arr_4 [25] ;
unsigned long long int arr_6 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 11358784317407685958ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 5601496364974085795ULL : 9854671159527413737ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
