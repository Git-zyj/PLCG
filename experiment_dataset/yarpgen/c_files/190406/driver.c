#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4135882473U;
unsigned int var_2 = 2957988720U;
unsigned int var_3 = 2951644619U;
unsigned long long int var_5 = 5632589941916419829ULL;
unsigned char var_7 = (unsigned char)6;
unsigned char var_8 = (unsigned char)243;
int var_9 = -1415196371;
unsigned long long int var_10 = 6747227154763067149ULL;
int var_12 = 496058196;
int var_13 = 2029486453;
int zero = 0;
long long int var_14 = -1872531887260907459LL;
unsigned int var_15 = 3532167772U;
unsigned long long int var_16 = 13317152016301086878ULL;
unsigned long long int var_17 = 2515680520169888442ULL;
unsigned int var_18 = 3770118017U;
unsigned int arr_0 [12] ;
int arr_1 [12] ;
long long int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 1136762627U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 25025080;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -7942470703342652473LL;
}

void checksum() {
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
