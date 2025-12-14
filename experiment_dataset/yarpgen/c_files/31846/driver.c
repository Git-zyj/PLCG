#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 815054681U;
unsigned long long int var_3 = 9574450820893637924ULL;
short var_4 = (short)24081;
unsigned char var_5 = (unsigned char)127;
_Bool var_8 = (_Bool)1;
long long int var_9 = 5409732293547650517LL;
int var_10 = -414892982;
int zero = 0;
long long int var_13 = -8880684327585732586LL;
unsigned char var_14 = (unsigned char)172;
long long int var_15 = -8709959753004073635LL;
unsigned char var_16 = (unsigned char)18;
unsigned short var_17 = (unsigned short)17407;
unsigned char var_18 = (unsigned char)38;
int var_19 = -444762641;
int var_20 = -779638131;
unsigned short arr_4 [15] ;
int arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned short)40501;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -1719309722 : 1770598737;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
