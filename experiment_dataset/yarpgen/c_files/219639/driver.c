#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3966851347370686979ULL;
long long int var_5 = 6284295422568070160LL;
long long int var_6 = -64523412469445115LL;
long long int var_10 = -1558801617119266948LL;
int var_12 = 502604842;
int var_18 = -2005797939;
int zero = 0;
int var_20 = 508158318;
int var_21 = -1986467841;
unsigned long long int var_22 = 1268024459862135244ULL;
int var_23 = 669135324;
int arr_2 [23] ;
int arr_3 [23] [23] ;
int arr_5 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 111231328;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = -1402766470;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 1656492514;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
