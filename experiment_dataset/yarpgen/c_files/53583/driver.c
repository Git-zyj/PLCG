#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14000970999764183175ULL;
unsigned long long int var_3 = 15440184861013283605ULL;
unsigned long long int var_6 = 8357027195622315495ULL;
unsigned long long int var_7 = 5384628696461182196ULL;
unsigned long long int var_9 = 4236021579725231410ULL;
_Bool var_11 = (_Bool)0;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 3711890883599480367ULL;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)35437;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)60533;
unsigned long long int var_20 = 10788406124535491496ULL;
unsigned long long int arr_2 [15] ;
unsigned long long int arr_11 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 4975477842656818927ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 1292490233167158855ULL : 14874333087206580134ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
