#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19617;
unsigned char var_1 = (unsigned char)50;
long long int var_2 = -9089258525057206888LL;
unsigned short var_3 = (unsigned short)10985;
unsigned long long int var_4 = 1862706236525324ULL;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 414384209U;
unsigned long long int var_7 = 15680484791789851655ULL;
short var_8 = (short)18839;
unsigned int var_9 = 943956406U;
int zero = 0;
unsigned int var_10 = 2379911146U;
unsigned long long int var_11 = 6255589070405386227ULL;
unsigned int var_12 = 3340048382U;
int var_13 = -1436163689;
unsigned short var_14 = (unsigned short)35790;
int var_15 = -929174743;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
int var_18 = -409106486;
short var_19 = (short)3324;
short var_20 = (short)-3924;
short arr_2 [19] ;
unsigned short arr_13 [19] [19] ;
int arr_16 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (short)27199;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)3650;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = 1414178978;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
