#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1069886985U;
long long int var_1 = 7025424053717121198LL;
_Bool var_5 = (_Bool)1;
int var_6 = -76663065;
unsigned long long int var_7 = 3477449203955654825ULL;
long long int var_8 = -7284608502816920218LL;
unsigned long long int var_11 = 17328353635562750830ULL;
unsigned long long int var_12 = 2180474400547163461ULL;
int zero = 0;
unsigned long long int var_13 = 2149062945656320007ULL;
long long int var_14 = -4959401299969033753LL;
unsigned int var_15 = 2536996935U;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 9438596428143111718ULL;
long long int var_18 = -5523867359066453438LL;
int arr_1 [14] ;
unsigned int arr_2 [14] [14] [14] ;
long long int arr_7 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 2052982681;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 2667848884U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = -7308265801920686420LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
