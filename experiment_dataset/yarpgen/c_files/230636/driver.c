#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2071224196386867711LL;
unsigned short var_2 = (unsigned short)47092;
unsigned short var_5 = (unsigned short)16825;
unsigned int var_6 = 881262898U;
short var_9 = (short)-22997;
int var_12 = 494003883;
int zero = 0;
unsigned long long int var_13 = 7309441830285054575ULL;
unsigned int var_14 = 1533721895U;
int var_15 = 1341104082;
int var_16 = -1360111902;
unsigned int var_17 = 2314721388U;
long long int var_18 = 1330660979257281268LL;
short var_19 = (short)26338;
long long int var_20 = -3627414650096651598LL;
int var_21 = 1449687891;
unsigned int arr_2 [24] ;
unsigned int arr_3 [24] [24] ;
unsigned short arr_4 [24] [24] [24] ;
short arr_6 [24] [24] ;
signed char arr_8 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 2359825601U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 2514544427U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)42247;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-1720;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)-82;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
