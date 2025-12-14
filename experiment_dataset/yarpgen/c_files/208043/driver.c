#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 563716449850569413LL;
signed char var_4 = (signed char)-60;
int var_6 = -263986130;
_Bool var_14 = (_Bool)1;
long long int var_17 = 7798339725819154894LL;
int zero = 0;
unsigned char var_18 = (unsigned char)184;
signed char var_19 = (signed char)-36;
int var_20 = 137353458;
unsigned char var_21 = (unsigned char)125;
signed char var_22 = (signed char)-126;
short var_23 = (short)1283;
unsigned int var_24 = 1799593637U;
unsigned long long int var_25 = 10830974698692871745ULL;
long long int arr_5 [21] [21] ;
unsigned long long int arr_8 [21] [21] [21] ;
short arr_10 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = -3589582256753634948LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 4701046661671048540ULL : 4271617460999331324ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (short)16029;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
