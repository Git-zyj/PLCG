#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1753079316U;
unsigned int var_3 = 3262771156U;
unsigned char var_4 = (unsigned char)90;
short var_5 = (short)19307;
long long int var_7 = 1501639893670901545LL;
int var_8 = 1990640559;
short var_9 = (short)-28830;
unsigned int var_10 = 3913622976U;
int var_11 = -936945996;
int zero = 0;
unsigned char var_12 = (unsigned char)38;
short var_13 = (short)20478;
long long int var_14 = -5978441144075756887LL;
unsigned long long int var_15 = 2320821791090325357ULL;
unsigned short var_16 = (unsigned short)11923;
long long int arr_1 [15] ;
short arr_3 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -5219397790707058641LL : 6342653650641339737LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-4811;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
