#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15757411210747810613ULL;
long long int var_4 = -8125886404978730593LL;
short var_5 = (short)26234;
unsigned char var_7 = (unsigned char)116;
unsigned char var_8 = (unsigned char)127;
int var_10 = 946246247;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 12823504100227252452ULL;
int zero = 0;
short var_20 = (short)8434;
int var_21 = 806551417;
int arr_1 [14] ;
unsigned long long int arr_2 [14] [14] ;
unsigned long long int arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 1123649870;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 5646331981135921810ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 12165432211750822502ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
