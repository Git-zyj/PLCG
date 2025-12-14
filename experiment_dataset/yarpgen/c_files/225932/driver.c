#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7943779923780026118LL;
unsigned char var_4 = (unsigned char)243;
short var_5 = (short)-20642;
unsigned short var_6 = (unsigned short)45336;
long long int var_10 = -7368343912231443288LL;
short var_12 = (short)21085;
long long int var_13 = -8862097892240183777LL;
unsigned char var_14 = (unsigned char)19;
int zero = 0;
unsigned long long int var_15 = 14238706653474009141ULL;
short var_16 = (short)24924;
long long int arr_0 [10] ;
long long int arr_2 [10] ;
unsigned short arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 6274883542317671140LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 8941107664103708576LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned short)14867;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
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
