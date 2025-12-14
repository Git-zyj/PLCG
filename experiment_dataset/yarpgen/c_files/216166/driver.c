#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 154190171U;
unsigned int var_5 = 1638279614U;
long long int var_6 = 5716656452738799415LL;
long long int var_7 = -2328950053773166857LL;
_Bool var_9 = (_Bool)0;
int var_10 = 315619191;
unsigned long long int var_11 = 13528317688360908718ULL;
int var_14 = -2120065708;
int zero = 0;
unsigned int var_15 = 2586047000U;
long long int var_16 = 7875025592462748529LL;
unsigned long long int var_17 = 3792969259515951501ULL;
signed char var_18 = (signed char)90;
unsigned short var_19 = (unsigned short)10065;
int var_20 = 684499403;
int arr_1 [18] ;
_Bool arr_2 [18] ;
unsigned short arr_5 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -995124566;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)15914;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
