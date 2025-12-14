#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6971750504591340644LL;
int var_5 = 867933417;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 189516214U;
unsigned int var_10 = 3295703406U;
unsigned int var_11 = 3205575269U;
int zero = 0;
unsigned int var_17 = 790535833U;
int var_18 = 699469215;
unsigned int var_19 = 4148319175U;
unsigned int var_20 = 1689251121U;
unsigned int var_21 = 3407945662U;
_Bool var_22 = (_Bool)1;
int var_23 = 397317290;
unsigned int arr_0 [24] [24] ;
int arr_1 [24] ;
unsigned int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 63663292U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -1228825947;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 392143845U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
