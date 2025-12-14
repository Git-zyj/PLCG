#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8529000403174767028LL;
short var_3 = (short)19797;
unsigned int var_5 = 3689712037U;
long long int var_6 = -1907481756536166375LL;
long long int var_7 = -2728644238316097866LL;
unsigned int var_8 = 1083582582U;
short var_9 = (short)-19381;
short var_10 = (short)27412;
unsigned int var_12 = 2725132663U;
unsigned long long int var_13 = 14333452630593120233ULL;
int zero = 0;
unsigned long long int var_14 = 5954851241029402578ULL;
unsigned int var_15 = 1027969885U;
unsigned int var_16 = 2293988759U;
unsigned int var_17 = 3663050719U;
long long int var_18 = 7975400738825141945LL;
short var_19 = (short)-4207;
unsigned int var_20 = 3693279724U;
unsigned int arr_5 [21] [21] ;
short arr_6 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = 2054339903U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)24582;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
