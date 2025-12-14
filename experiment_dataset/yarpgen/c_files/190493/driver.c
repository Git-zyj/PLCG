#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)96;
unsigned short var_2 = (unsigned short)20520;
unsigned char var_3 = (unsigned char)157;
unsigned short var_4 = (unsigned short)30018;
unsigned long long int var_6 = 15097503136757081920ULL;
unsigned long long int var_7 = 10053932940094725765ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 13171295641439508360ULL;
unsigned long long int var_12 = 2040206257948478206ULL;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 1294407547U;
_Bool var_15 = (_Bool)0;
long long int arr_4 [14] ;
unsigned char arr_5 [14] [14] ;
unsigned short arr_7 [14] [14] [14] ;
unsigned long long int arr_8 [14] [14] ;
long long int arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = -7649479044922455580LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)232;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)51489;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = 8977826147913088817ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -870625741399524011LL : 3060350672733270194LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
