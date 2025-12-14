#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7269118060982743038LL;
short var_2 = (short)-17800;
unsigned long long int var_4 = 4509888735644594879ULL;
unsigned long long int var_5 = 14547790724694739816ULL;
unsigned long long int var_6 = 12631973644006959254ULL;
unsigned char var_8 = (unsigned char)242;
signed char var_10 = (signed char)-81;
unsigned long long int var_11 = 2696884755567021852ULL;
signed char var_12 = (signed char)-40;
int zero = 0;
short var_13 = (short)-23225;
unsigned long long int var_14 = 1752794032133178165ULL;
unsigned long long int var_15 = 10675753324950298980ULL;
unsigned long long int var_16 = 8325626528343141130ULL;
unsigned short var_17 = (unsigned short)64928;
int var_18 = -782548852;
unsigned int arr_1 [22] ;
int arr_2 [22] ;
unsigned long long int arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 3402321557U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = -858626773;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 3243845934494224952ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
