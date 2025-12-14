#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26521;
int var_1 = -2108941017;
unsigned int var_2 = 3140108528U;
short var_3 = (short)-3178;
int var_7 = 1057915185;
short var_8 = (short)-20537;
unsigned char var_9 = (unsigned char)190;
int zero = 0;
unsigned long long int var_11 = 15621911505625314713ULL;
long long int var_12 = 2333075982870370178LL;
short var_13 = (short)-13674;
unsigned int var_14 = 3748140198U;
short var_15 = (short)846;
unsigned int var_16 = 1444667189U;
unsigned short var_17 = (unsigned short)38906;
long long int var_18 = 6337803565344976721LL;
long long int arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = -1424678237188074293LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
