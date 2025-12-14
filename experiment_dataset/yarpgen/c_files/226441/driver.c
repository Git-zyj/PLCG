#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1391469643U;
unsigned int var_9 = 283424836U;
unsigned long long int var_10 = 3213708358468601755ULL;
unsigned int var_11 = 3430123608U;
unsigned int var_12 = 3333480949U;
unsigned long long int var_15 = 1511142426381585268ULL;
unsigned int var_16 = 82441440U;
int zero = 0;
unsigned long long int var_17 = 2923621933448484694ULL;
unsigned int var_18 = 3552076042U;
unsigned long long int var_19 = 8622861493156372339ULL;
unsigned int var_20 = 4096035282U;
unsigned long long int var_21 = 11015536822776279461ULL;
unsigned long long int arr_0 [24] ;
unsigned long long int arr_1 [24] ;
unsigned long long int arr_2 [24] ;
unsigned int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 18014235737669835331ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 11924081610215461165ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 4261180341312178730ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 440533426U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
