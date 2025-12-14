#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50755;
unsigned int var_1 = 2196417496U;
unsigned long long int var_2 = 4437129639500839277ULL;
unsigned long long int var_5 = 4828051552861633794ULL;
unsigned char var_12 = (unsigned char)20;
unsigned int var_13 = 3575106974U;
int zero = 0;
short var_15 = (short)19846;
unsigned short var_16 = (unsigned short)59009;
int var_17 = -769587109;
int var_18 = 1012290524;
unsigned short var_19 = (unsigned short)25248;
int var_20 = 721460636;
unsigned long long int arr_0 [21] [21] ;
int arr_2 [21] [21] ;
unsigned int arr_3 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 18420262397931064347ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 394228653;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 2806083737U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
