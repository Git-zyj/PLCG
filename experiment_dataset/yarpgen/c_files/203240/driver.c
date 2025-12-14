#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)45;
unsigned long long int var_1 = 3420877696238472423ULL;
long long int var_2 = 2476569550541827758LL;
long long int var_3 = -6616940347756880880LL;
long long int var_4 = 1679426835028348027LL;
unsigned long long int var_6 = 7517070534966257930ULL;
long long int var_7 = -6544220495352673115LL;
int zero = 0;
unsigned int var_10 = 3997285203U;
unsigned long long int var_11 = 10815324812713259494ULL;
long long int var_12 = -8473919827727604386LL;
short var_13 = (short)9910;
long long int var_14 = -4039805262127821503LL;
long long int var_15 = -3516029628719560604LL;
unsigned long long int var_16 = 15140347763605025751ULL;
short var_17 = (short)-17868;
unsigned char var_18 = (unsigned char)207;
unsigned char var_19 = (unsigned char)66;
long long int arr_1 [15] [15] ;
unsigned int arr_3 [16] [16] ;
unsigned char arr_9 [16] ;
unsigned char arr_2 [15] ;
unsigned long long int arr_17 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = -1280360853596699892LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 1774121555U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)195 : (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)230;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? 11085705285942549145ULL : 3706451227812341602ULL;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
