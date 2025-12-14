#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 488782983;
int var_4 = 1148015023;
_Bool var_6 = (_Bool)0;
int var_7 = 1963788477;
unsigned long long int var_9 = 4374675405364600998ULL;
int zero = 0;
unsigned long long int var_10 = 14129268014444132827ULL;
long long int var_11 = -8059868710927435547LL;
unsigned long long int var_12 = 14285954355946760333ULL;
long long int var_13 = -6443144610317099651LL;
_Bool var_14 = (_Bool)0;
short var_15 = (short)9105;
unsigned long long int arr_0 [10] ;
int arr_1 [10] [10] ;
unsigned long long int arr_3 [10] [10] ;
long long int arr_4 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 6717426065589115182ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 1715169938;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 7985377635078938187ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 815501856837423792LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
