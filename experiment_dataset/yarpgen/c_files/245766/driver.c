#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -5690083680771197610LL;
unsigned char var_7 = (unsigned char)222;
unsigned int var_8 = 808665510U;
int zero = 0;
unsigned char var_10 = (unsigned char)141;
unsigned int var_11 = 3101557162U;
unsigned long long int var_12 = 6774211360373844403ULL;
unsigned short var_13 = (unsigned short)47839;
unsigned int var_14 = 3943050329U;
_Bool var_15 = (_Bool)0;
int var_16 = -2118287571;
unsigned long long int arr_0 [17] [17] ;
int arr_1 [17] ;
_Bool arr_4 [17] [17] [17] ;
short arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 6327906404610945162ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 1293099226;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (short)14424;
}

void checksum() {
    hash(&seed, var_10);
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
