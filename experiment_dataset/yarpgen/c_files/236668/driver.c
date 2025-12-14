#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9917297754987835112ULL;
unsigned int var_6 = 3532404294U;
signed char var_11 = (signed char)121;
int var_16 = -1442385364;
int zero = 0;
signed char var_17 = (signed char)-109;
unsigned long long int var_18 = 4584939728867961328ULL;
signed char var_19 = (signed char)-86;
unsigned long long int arr_0 [15] ;
unsigned int arr_1 [15] ;
unsigned long long int arr_3 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2496835636791072676ULL : 16813082454035219091ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 4003778890U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 14127080781953697679ULL : 11888191291678732631ULL;
}

void checksum() {
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
