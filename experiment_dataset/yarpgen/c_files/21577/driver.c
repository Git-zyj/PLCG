#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-24264;
unsigned char var_5 = (unsigned char)230;
unsigned long long int var_9 = 3406300525102731477ULL;
int var_12 = 193566204;
unsigned int var_13 = 3420508915U;
int zero = 0;
unsigned long long int var_15 = 16394421251957239621ULL;
unsigned short var_16 = (unsigned short)9554;
signed char var_17 = (signed char)83;
signed char var_18 = (signed char)43;
unsigned long long int var_19 = 3355288762420261794ULL;
unsigned char var_20 = (unsigned char)193;
signed char arr_0 [23] ;
unsigned int arr_4 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)88;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2840243150U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
