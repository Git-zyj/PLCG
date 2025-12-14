#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3486016512U;
unsigned char var_1 = (unsigned char)193;
unsigned int var_2 = 981198692U;
short var_4 = (short)2109;
unsigned int var_6 = 1302941292U;
unsigned int var_7 = 262028414U;
short var_11 = (short)5675;
unsigned long long int var_13 = 2839375257728685045ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)115;
unsigned int var_16 = 3150696993U;
unsigned int var_17 = 4086460853U;
unsigned int var_18 = 3654821572U;
unsigned long long int var_19 = 10197705221296695394ULL;
unsigned int var_20 = 3664880387U;
unsigned long long int arr_0 [19] ;
unsigned long long int arr_1 [19] ;
unsigned char arr_2 [19] [19] ;
short arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 3206404430273318019ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 13818770786002606198ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)120 : (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)7231 : (short)16858;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
