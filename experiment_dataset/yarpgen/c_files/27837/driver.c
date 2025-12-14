#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)75;
unsigned int var_1 = 700852947U;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 3874620684U;
unsigned short var_4 = (unsigned short)20553;
long long int var_5 = -7127445391641224668LL;
unsigned long long int var_6 = 11509704221834657825ULL;
unsigned int var_7 = 2901721179U;
unsigned int var_8 = 579579360U;
short var_9 = (short)32548;
unsigned long long int var_10 = 6368209487902876060ULL;
unsigned int var_11 = 92723705U;
int zero = 0;
unsigned int var_12 = 2858016459U;
unsigned short var_13 = (unsigned short)14928;
unsigned long long int var_14 = 18304901032666638326ULL;
unsigned int var_15 = 4153606185U;
unsigned long long int arr_11 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? 14448952875997819885ULL : 8217562951667011402ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
