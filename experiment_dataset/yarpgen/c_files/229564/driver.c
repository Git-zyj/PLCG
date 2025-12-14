#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)175;
long long int var_2 = 4226871404555306802LL;
int var_4 = -651092842;
unsigned long long int var_5 = 10775032989236575297ULL;
int var_6 = -217662341;
unsigned char var_7 = (unsigned char)100;
long long int var_8 = 9134873206066405867LL;
long long int var_9 = 7218445318416019997LL;
unsigned char var_10 = (unsigned char)23;
long long int var_11 = -8891914301659292111LL;
int var_12 = -1950213033;
int zero = 0;
unsigned long long int var_13 = 11990331978902931131ULL;
int var_14 = 1066199814;
unsigned char var_15 = (unsigned char)247;
unsigned long long int var_16 = 7236485798856477871ULL;
unsigned char var_17 = (unsigned char)192;
unsigned char var_18 = (unsigned char)140;
unsigned char var_19 = (unsigned char)41;
long long int arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -4954137650686294201LL : 5147918266262513664LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
