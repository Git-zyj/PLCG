#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 650267151U;
unsigned int var_8 = 574928893U;
unsigned int var_9 = 3407473098U;
unsigned int var_10 = 1408724196U;
unsigned char var_13 = (unsigned char)212;
int zero = 0;
short var_15 = (short)27067;
unsigned char var_16 = (unsigned char)85;
unsigned char var_17 = (unsigned char)104;
long long int var_18 = -1516366674406889432LL;
unsigned int var_19 = 2946274129U;
int var_20 = -72732883;
unsigned long long int var_21 = 14958822298200778820ULL;
int var_22 = -1639376386;
_Bool arr_0 [15] ;
unsigned long long int arr_1 [15] ;
unsigned long long int arr_2 [15] ;
short arr_6 [15] ;
unsigned long long int arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 15434524914058388541ULL : 15959390081502331744ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 4102178544973248065ULL : 3487697815061530324ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)14589 : (short)-8300;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 1434350226541194652ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
