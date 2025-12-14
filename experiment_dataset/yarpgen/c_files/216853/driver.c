#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26088;
unsigned int var_3 = 3091576984U;
long long int var_6 = 1257926969209041869LL;
unsigned int var_7 = 4248106928U;
unsigned int var_9 = 2539643799U;
long long int var_10 = 8404279349494572374LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = -994871465021175777LL;
long long int var_13 = -8392070748695266571LL;
short var_14 = (short)14943;
unsigned long long int var_15 = 8910438386268864633ULL;
unsigned long long int var_16 = 12511572810372969865ULL;
unsigned int arr_1 [18] [18] ;
unsigned long long int arr_2 [18] ;
unsigned long long int arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 2793337270U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 10103337972443684644ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 14353545004663730561ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
