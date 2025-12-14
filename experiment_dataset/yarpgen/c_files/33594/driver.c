#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3437986505608661033LL;
int var_2 = 565351833;
int var_3 = 1262943428;
unsigned int var_4 = 750077094U;
long long int var_6 = -1218973582085534236LL;
long long int var_7 = 5061964331973898855LL;
short var_8 = (short)-10536;
int zero = 0;
unsigned short var_10 = (unsigned short)50795;
unsigned int var_11 = 197916926U;
short var_12 = (short)5814;
long long int var_13 = -2709819647081038031LL;
short var_14 = (short)24151;
long long int var_15 = -5891835549139945236LL;
long long int var_16 = -3269902673227423882LL;
int var_17 = 1181578437;
long long int var_18 = -1530596579975685446LL;
unsigned short var_19 = (unsigned short)5632;
unsigned short var_20 = (unsigned short)58320;
long long int arr_0 [23] [23] ;
unsigned int arr_5 [15] ;
unsigned long long int arr_6 [20] ;
long long int arr_10 [20] ;
long long int arr_11 [20] [20] [20] ;
unsigned short arr_12 [20] [20] [20] [20] [20] ;
short arr_13 [20] [20] [20] ;
long long int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = -7326769187048496935LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 936027740U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 2529292134756911729ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = -8348618518533950166LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 3408464832131918493LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)39741;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)21512 : (short)-29619;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 3181948986639434673LL;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
