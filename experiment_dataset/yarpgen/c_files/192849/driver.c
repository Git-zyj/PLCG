#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61489;
long long int var_2 = 2587178455232215939LL;
signed char var_3 = (signed char)87;
long long int var_4 = 2405648424722232640LL;
unsigned char var_5 = (unsigned char)157;
short var_6 = (short)-22306;
long long int var_7 = 8925305448020004682LL;
signed char var_10 = (signed char)92;
int zero = 0;
long long int var_13 = 1219033520524016963LL;
int var_14 = -363022866;
long long int var_15 = 5692246738432455568LL;
long long int var_16 = 508487728196688397LL;
int var_17 = -188281948;
unsigned long long int arr_7 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 7827547546108843875ULL : 5829992934890422217ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
