#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 8429006051663234230ULL;
unsigned long long int var_5 = 9610245742757109440ULL;
signed char var_6 = (signed char)-24;
unsigned long long int var_9 = 11624008789969376933ULL;
unsigned long long int var_11 = 9756379294072200415ULL;
signed char var_12 = (signed char)104;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 7995329107117663668ULL;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
_Bool arr_0 [13] [13] ;
unsigned long long int arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 15280793350754412253ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
