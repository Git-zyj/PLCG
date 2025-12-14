#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18306828967864180157ULL;
unsigned long long int var_2 = 15011198149198783808ULL;
unsigned long long int var_3 = 13997470822135181921ULL;
unsigned long long int var_4 = 13350638251108048387ULL;
unsigned long long int var_5 = 3669684567137143659ULL;
unsigned long long int var_6 = 8781407487050644102ULL;
unsigned long long int var_7 = 11540472622612881857ULL;
unsigned long long int var_9 = 3560234513181502551ULL;
unsigned long long int var_10 = 2931221765151816678ULL;
unsigned long long int var_13 = 18181435154937507018ULL;
unsigned long long int var_14 = 16987065580231037171ULL;
unsigned long long int var_15 = 520506700855026918ULL;
unsigned long long int var_16 = 14364832461602797205ULL;
unsigned long long int var_17 = 4055811362496403644ULL;
int zero = 0;
unsigned long long int var_18 = 13616217856284242293ULL;
unsigned long long int var_19 = 11190123162305971798ULL;
unsigned long long int var_20 = 2342747636230188468ULL;
unsigned long long int var_21 = 10886336705731251296ULL;
unsigned long long int var_22 = 279587394112319528ULL;
unsigned long long int var_23 = 3210515970387140023ULL;
unsigned long long int var_24 = 8225257563967556149ULL;
unsigned long long int var_25 = 811692880762259646ULL;
unsigned long long int arr_0 [10] ;
unsigned long long int arr_2 [10] [10] ;
unsigned long long int arr_5 [11] [11] ;
unsigned long long int arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 13582494176456394819ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 1314214331513440640ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = 10533099960599592833ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 12049099318353193635ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
