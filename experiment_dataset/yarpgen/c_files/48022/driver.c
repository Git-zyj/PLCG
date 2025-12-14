#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 15216854494031683387ULL;
unsigned long long int var_9 = 17563154359077196458ULL;
unsigned long long int var_12 = 13639126536622931699ULL;
unsigned long long int var_15 = 15892229487681217195ULL;
int zero = 0;
unsigned long long int var_17 = 12764104591088017438ULL;
unsigned long long int var_18 = 15777965366134777402ULL;
unsigned long long int var_19 = 8932862656166255196ULL;
unsigned long long int var_20 = 13115447529918870617ULL;
unsigned long long int arr_0 [14] ;
unsigned long long int arr_3 [14] [14] ;
unsigned long long int arr_4 [14] ;
unsigned long long int arr_5 [14] [14] ;
unsigned long long int arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 12505969167781211003ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 4799591127706282946ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 4661210240112341634ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 4130359987909801997ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 11895542217056078805ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
