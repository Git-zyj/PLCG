#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-127;
unsigned long long int var_1 = 4731146439770654741ULL;
long long int var_2 = -727472671208207428LL;
long long int var_3 = -706222808409001913LL;
long long int var_4 = -2664940603369810387LL;
unsigned long long int var_5 = 17884113778265380150ULL;
int var_6 = -1410427660;
long long int var_7 = -8439195268114374885LL;
unsigned int var_9 = 1129712525U;
short var_11 = (short)10283;
int zero = 0;
long long int var_16 = -6596962912345783405LL;
unsigned long long int var_17 = 15745505493411446686ULL;
long long int var_18 = -9185298980246238474LL;
unsigned char var_19 = (unsigned char)33;
long long int arr_0 [20] [20] ;
unsigned int arr_1 [20] ;
unsigned int arr_3 [20] [20] ;
long long int arr_5 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 1279782919611422347LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 3754277551U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 3521570U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = -5072719760051141102LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
