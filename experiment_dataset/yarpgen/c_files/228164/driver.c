#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1969071495;
int var_1 = -920522229;
int var_2 = -383414190;
unsigned int var_3 = 1145747484U;
int var_4 = -1338446611;
unsigned int var_5 = 3628319825U;
int var_8 = 2126152101;
unsigned int var_9 = 850434380U;
int var_10 = 1939829198;
int var_11 = -1887118776;
int zero = 0;
int var_12 = -542640989;
int var_13 = 594647012;
int var_14 = -1429867889;
int var_15 = 813169197;
int arr_0 [16] ;
int arr_2 [16] [16] ;
unsigned int arr_3 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -879178236;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = -617205152;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 2581241333U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
