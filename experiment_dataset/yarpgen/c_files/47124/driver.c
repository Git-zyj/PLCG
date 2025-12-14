#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14246314228101827069ULL;
unsigned int var_1 = 2101009870U;
unsigned char var_3 = (unsigned char)101;
long long int var_5 = 5236550732509491737LL;
unsigned short var_6 = (unsigned short)23953;
int var_7 = 2026872982;
unsigned int var_9 = 1917580858U;
int zero = 0;
long long int var_10 = -8541586447876458118LL;
unsigned int var_11 = 3868652513U;
long long int var_12 = 1781807835790749693LL;
unsigned long long int var_13 = 15922860604689432856ULL;
unsigned short var_14 = (unsigned short)56393;
unsigned char var_15 = (unsigned char)128;
unsigned int arr_3 [18] ;
unsigned short arr_8 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 3702875811U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned short)59750;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
