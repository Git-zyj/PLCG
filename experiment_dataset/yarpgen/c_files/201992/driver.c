#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -1221062512491052281LL;
long long int var_10 = 527617386724339823LL;
int zero = 0;
long long int var_12 = 7985416475258158214LL;
long long int var_13 = 1178549948161309119LL;
unsigned long long int var_14 = 1783406027380908135ULL;
unsigned short var_15 = (unsigned short)40390;
long long int var_16 = -2291288156276063464LL;
long long int var_17 = -1491910849717355518LL;
long long int var_18 = 3746204787963309736LL;
unsigned short var_19 = (unsigned short)55783;
long long int var_20 = 3888545974579977546LL;
long long int arr_4 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 7123779937548492644LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
