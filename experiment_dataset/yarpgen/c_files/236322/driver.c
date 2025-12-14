#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15000593284278798891ULL;
unsigned long long int var_4 = 6267581578767674502ULL;
long long int var_5 = -2842135515352291064LL;
unsigned char var_11 = (unsigned char)87;
int var_12 = 183870599;
unsigned short var_13 = (unsigned short)13241;
unsigned long long int var_15 = 16262562201856735785ULL;
unsigned short var_16 = (unsigned short)787;
int zero = 0;
unsigned char var_17 = (unsigned char)20;
long long int var_18 = 7819471363039063398LL;
long long int var_19 = -8812819119558815522LL;
unsigned long long int var_20 = 10587279701113317689ULL;
long long int var_21 = -342754647103378048LL;
unsigned long long int var_22 = 17735778298706954444ULL;
long long int arr_4 [17] [17] [17] ;
signed char arr_6 [17] [17] ;
int arr_11 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2615719774186254997LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)61;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = -66451500;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
