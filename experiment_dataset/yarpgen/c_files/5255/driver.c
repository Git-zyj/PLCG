#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7514868550631749915LL;
long long int var_2 = 470684052397789654LL;
long long int var_4 = 1756007708174739395LL;
long long int var_6 = -4414033640839015223LL;
long long int var_8 = 3693961378804447562LL;
long long int var_9 = 4973313798652817962LL;
long long int var_10 = 7790773802692975136LL;
long long int var_11 = -8062730683785939831LL;
long long int var_12 = 5120030288237021351LL;
long long int var_13 = 3520141229580042428LL;
long long int var_15 = 8603277951364871555LL;
long long int var_16 = -687692419659152836LL;
int zero = 0;
long long int var_17 = 5837072106037359045LL;
long long int var_18 = -6076946197793184668LL;
long long int var_19 = -6443079530888240035LL;
long long int var_20 = 6262617073233176746LL;
long long int arr_1 [16] [16] ;
long long int arr_2 [16] [16] [16] ;
long long int arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 8399476505389667326LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -801902935556610299LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 3966665565560249497LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
